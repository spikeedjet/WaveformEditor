
## 指令集

### 10. ScrSin 
ScrSin Channel=ch t=traveltime a=magnitude f=frequency p=phase b=bias

命令解释:
描述一个正弦轨迹。 a*sin(2*pi*f*t + p*2*pi)+b

参数解释:
ch: 控制器通道
traveltime: 时间，单位微秒
magnitude: 正弦波的大小
frequency: 单位Hz
phase: 每单位的阶段，1.0代表一个总周期
bias: 正弦波的偏移量（从0开始）的值



### 8. ScrPulse 
ScrPulse Channel=ch p1=pos1 p2=pos2 t12=t12 t2=t2 t21=t21 t1=t1 loop=cnt

命令解释:
生成一个周期或持续的脉冲序列。通过调整时间参数，还支持三角形、锯齿波和梯形波

参数解释:
ch: 控制器通道
pos1: “1” 位置
pos2: “2” 位置
t12: 从位置1到2的时间，单位为微秒
t2: pos2 保持时间，单位为微秒
t21: 从位置2返回到位置1的时间，单位为微秒
t1: pos1保持时间，单位为微秒
cnt: 迭代计数，此波形的重复次数。如果cnt=0，它会不断地重复
