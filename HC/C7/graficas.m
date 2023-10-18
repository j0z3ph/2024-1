%graficas.m
%Creditos a: Isidro

x = -2*pi:0.1:2*pi;
y = sin(x);
%plot(x,y, "mh--", LineWidth=2, MarkerSize=20, MarkerEdgeColor="k", MarkerFaceColor="c");
%plot(x,y, "mh--", "LineWidth", 2, "MarkerSize", 20, "MarkerEdgeColor", "k", "MarkerFaceColor", "c");
plot(x,y, LineWidth=2, MarkerSize=10, MarkerEdgeColor="k", MarkerFaceColor="c" ...
    ,LineStyle="--", Color=[0 0 0], Marker="h");