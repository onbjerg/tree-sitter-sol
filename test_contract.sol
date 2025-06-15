pragma solidity ^0.8.0;

contract Test {
    uint256 public counter;
    
    error InvalidValue(uint256 value);
    event CounterUpdated(uint256 oldValue, uint256 newValue);
    
    function increment() external {
        uint256 oldValue = counter;
        counter++;
        emit CounterUpdated(oldValue, counter);
    }
    
    function setValue(uint256 newValue) external {
        if (newValue == 0) {
            revert InvalidValue(newValue);
        }
        
        uint256 oldValue = counter;
        counter = newValue;
        emit CounterUpdated(oldValue, counter);
    }
    
    function getValue() external view returns (uint256) {
        return counter;
    }
}