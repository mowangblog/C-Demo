const title = "�����"

const name = "�ɳ�"

const question = "˭����ȫ������˧�����ˣ�����˵���������֣�"

const info = "�����ѣ�ʵ��ʵ˵��"

const scend = "������˵����ʵ�������Ǹ���ʵ�ĺú���"

dim answer

do 

answer = inputbox(question,title)

if answer <> name then msgbox info, vbinformation+vbokonly,title

loop until answer =name

msgbox scend,vbinformation+vbokonly,title