### 项目名 (如kylin-application)

#### 运行方式
./run 项目名 (如 ./run kylin-application)

#### 更改信息 (如下面所示)

#### 20201107 09:58 caoliang
将计算器各个模式下的按钮替换为BasicButton，使用图片作为显示，重写setText和text函数，从而保证按钮显示不受系统字体影响。

#### 20201107 15:01 caoliang
将汇率换算模式下的历史记录转换为相应的历史记录，使用unitConvHistory函数对原本的历史记录进行转换。
