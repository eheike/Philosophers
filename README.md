# Philosophers
Классическая задача об обедающих философах на Си, заключающаяся в управлении потоками при многопоточности

Задача:
• Один или несколько философов сидят на круглым столом, в середине которого стоит большая миска со спагетти
• Философы могут быть в 3 состояниях: есть, думать или спать
• У каждого философа есть одна вилка, однако для поедания спагетти необходимы 2 вилки, поэтому философ берет 
в одну руку свою вилку, а в другую - вилку соседа
• После того, как философ закончит есть, он возвращает вилки на стол и засыпает. После пробуждения начинает
думать, пока не освободятся необходимые ему вилки. Симуляция заканчивается, если хотя бы один философ умрет
от голода
• Каждый философ должен есть, философы не разговаривают между собой и не должны умирать (если позволяют заданные условия)

Необходимо написать программу, которая принимает следующие параметры:
number_of_philosophers time_to_die time_to_eat time_to_sleep
[number_of_times_each_philosopher_must_eat]

◦ number_of_philosophers: количество философов
◦ time_to_die (in milliseconds): если философ не начнет есть в течение этого времени 
с момента начала последнего приема пищи (или с момента старта программы), то он умрет
◦ time_to_eat (in milliseconds): время, за которое ест философ. В это время он занимает 2 вилки
◦ time_to_sleep (in milliseconds): время, которое философ спит
◦ number_of_times_each_philosopher_must_eat (optional argument): если все философы поели 
это количество раз, то симуляция останавливается. Если этот аргумент не задан, симуляция продолжается, 
пока не умрет хотя бы олин философ

Программа должна писать логи:
• Все изменения состояния каждого философа должны выглядеть так:
◦ timestamp_in_ms X has taken a fork
◦ timestamp_in_ms X is eating
◦ timestamp_in_ms X is sleeping
◦ timestamp_in_ms X is thinking
◦ timestamp_in_ms X died
Логи не должны перемешиваться между собой

Каждый философ должен быть потоком. Для избежания состояния гонки данных используются мьютексы