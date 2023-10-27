%polar
subplot(2,2,1);
fplot(@(x)sin(x),[-2*pi, 2*pi], "r:");
hold on;
fplot(@(x)cos(x),[-2*pi, 2*pi], "b-.");
hold off;
subplot(2,2,2);
fplot(@(x)cos(x),[-2*pi, 2*pi], "k--");

subplot(2,2,3);
theta = linspace(0,2*pi,500);
radio = 3 * cos(0.5*theta).^2+theta;
polarplot(theta, radio);

subplot(2,2,4);
theta = linspace(0.2*pi,500);
radio = 3 * cos(0.5*theta).^2+theta;
polarplot(theta, radio);