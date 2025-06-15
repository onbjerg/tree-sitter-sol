contract Test { function test() { (Actions[] memory actions, bytes[] memory params) = abi.decode(data, (Actions[], bytes[])); } }
