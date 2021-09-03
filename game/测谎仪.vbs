const title = "测谎仪"

const name = "成成"

const question = "谁才是全世界最帅的男人，大声说出他的名字！"

const info = "你撒谎！实话实说吧"

const scend = "朋友你说出了实话，你是个诚实的好孩子"

dim answer

do 

answer = inputbox(question,title)

if answer <> name then msgbox info, vbinformation+vbokonly,title

loop until answer =name

msgbox scend,vbinformation+vbokonly,title