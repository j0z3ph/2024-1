%
x = [2009	2010	2011	2012	2013	2014	2015	2016	2017	2018	2019	2020	2021	2022];
android = [2.41	8.82	19	27.41	39.21	53.65	64.2	69.11	72.63	75.45	75.47	73.06	71.89	71.34];
%bar(x,android);
%barh(x,android);
%stairs(x,android);
%stem(x,android);

y = [2.41,34.01,0,35.49,9.42,1.11,8.16,1.73,0,4.18,0.05,0,0,0,0.18,2.24,0,0,0,1.02];
%pie(y);
etiquetas = ["Android","iOS","Series 40","SymbianOS","Unknown","Samsung","BlackBerry OS","Windows","Nokia Unknown","Sony Ericsson","Linux","KaiOS","bada","Tizen","LG","Playstation","Firefox OS","MeeGo","Nintendo 3DS","Other"];
z = zeros(1,length(y));
z(2) = 1;
z(4) = 1;
pie(y,z,etiquetas);