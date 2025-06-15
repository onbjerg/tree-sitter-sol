contract Test { function test() returns (bytes4, uint256) { return (IHooks.afterRemoveLiquidity.selector, toBalanceDelta(int128(feeAmount0), int128(feeAmount1))); } }
