clc; clear;

T1 = 40; T2 = 300; T3 = 180; T4 = 250; T5 = 150;
C1 = 4; C2 = 80; C3 = 20; C4 = 10; C5 = 10;
B1 = 0; B2 = 0; B3 = 0; B4 = 5; B5 = 0;
D1 = 10; D2 = 300; D3 = 140; D4 = 150; D5 = 150;

%fi = SUM(Cj/Tj,Hn) + 1/Ti*(Ci+Bi+SUM(Ck,H1))
%% f1
% H = emtpy;
f1 = 1/T1*(C1)
u1 = utilization(1,D1/T1)
f1 < u1

%% f2
% H = e1, H1 = empty, Hn = e1
f2 = C1/T1 + 1/T2*(C2 + B2)
u2 = utilization(2,D2/T2)
f2 < u2

%% f3
% H = e1,e2, H1 = e2, Hn = e1
f3 = C1/T1 + 1/T3*(C3 + B3+C2)
u3 = utilization(2,D3/T3)
f3 < u3


%% f4
% H = e1,e2,e3 H1 = e2,e3 Hn = e1
f4 = C1/T1 + 1/T4*(C4 + B4 + C2 + C3)
u4 = utilization(2,D4/T4)
f4 < u4

%% f5
% H = e1,e2,e3,e4 H1 = e2,e3,e4 Hn = e1
f5 = C1/T1 + 1/T5*(C5 + B5 + C2 + C3 + C4)
u5 = utilization(2,D5/T5)
f5 < u5


