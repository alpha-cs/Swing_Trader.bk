create table Company (
	ID INT NOT NULL UNIQUE,
	Name VARCHAR(100) NOT NULL UNIQUE,
	Ticker VARCHAR(50) NOT NULL UNIQUE,
	Exchange_ID INT,
	MarketCap VARCHAR(25),
	Flag BOOLEAN NOT NULL
);
insert into Company (ID, Name, Ticker, Exchange_ID, MarketCap, Flag) values (1, 'II-VI Incorporated', 'IIVI', null, '$2.11B', false);
insert into Company (ID, Name, Ticker, Exchange_ID, MarketCap, Flag) values (2, 'Helios and Matheson Analytics Inc', 'HMNY', null, '$14.65M', true);
insert into Company (ID, Name, Ticker, Exchange_ID, MarketCap, Flag) values (3, 'Smith (A.O.) Corporation', 'AOS', null, '$9.82B', false);
insert into Company (ID, Name, Ticker, Exchange_ID, MarketCap, Flag) values (4, 'National Grid Transco, PLC', 'NGG', null, '$47.46B', true);
insert into Company (ID, Name, Ticker, Exchange_ID, MarketCap, Flag) values (5, 'Five Prime Therapeutics, Inc.', 'FPRX', null, '$809.46M', false);
