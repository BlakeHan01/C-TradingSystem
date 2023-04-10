# CPPTradingSystem

## Limit Order Book
Currently getting data from Nasdaq ITCH in file format for testing purposes. Will be able to get real time data.

## Important interface
The trading system is connected through interface, aka interface based. Important interfaces are iDataFeed, iStrategy/iAlgorithm, iIndicator
iDataFeed is interface that can accept data from different sources, such as files(Limit order book constructed from Nasdaq ITCH), real time data and stored in threads.
Threads run in infinite loop.
iStrategy, stragegy base class.
iIndicator, indicator base class.

## Indicator Framework
Build indicator interface, and implement indicators such as moving average indicator, spread intecators.

## Strategy Framework
Build algorithm interface, and implement callback for tick data. When order executed in market data, orderbook issues callback on trade. Run different strategy based on signals.
