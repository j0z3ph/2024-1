%Especiales

%Esferas
[x, y, z] = sphere(50); 
surf(x,y,z);

%Cilindros
t=linspace(0,pi,20);
r=1+cos(t*2) + sin(t/3);
[x,y,z]=cylinder(r);
surf(x,y,z);
axis square;

%Graficas de Barras
Y=[1,6.5,7;
   2,6  ,7;
   3,5.5,7;
   4,5  ,7;
   3,4  ,7;
   2,3  ,7;
   1,2  ,7];
bar3(Y);

%Graficas de Tallo
x=0:0.2:10;
y=sin(x);
z=x.^1.5;
stem3(x,y,z,'fill');

%Graficas de Dispersion
x=0:0.2:10;
y=sin(x);
z=x.^1.5;
scatter3(x,y,x,'filled');
grid on;
%colormap([0.1,0.1,0.1]);

%Graficas de Pastel
X=[5,9,14,20];
explode=[0,0,1,0];
pie3(X,explode);