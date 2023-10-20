%
clear;
clc;
x = linspace(-2,4,100);
f = 3*x.^3 - 26*x + 10;
fp = 9*x.^2 - 26;
fbp = 18 * x;

plot(x,f,"r:o", LineWidth=4);
line(x,fp,"LineWidth", 5);
line(x,fbp, "Color", "g");

title("\fontsize{30}\fontname{Comic Sans MS}MUCHAS GRAFICAS");
xlabel("\fontsize{20}Eje X");
ylabel("\fontsize{20}Eje Y");
text(0.24,4.36, "HOLO");
%gtext("JUAN");
legend("\fontsize{20}\bf f(x)=3x^3 - 26x + 10 + sin(\pi)", ...
    "\fontsize{20}\bf f'(x)=9x^2 - 26", "\fontsize{20}\bf f''(x)=18x", ...
    "Location","bestoutside");
