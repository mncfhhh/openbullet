tok = input('[~] Enter Token : ')
ID = input('[~] Enter ID :')
i =int(input('[~] PES : '))
for i in range(i):
 user = '1234567890'
 us = str(''.join((random.choice(user) for i in range(7))))
 username = '+abcdya@gmail.com' + us
 password = '01587621' + us
 us4 = str(''.join((random.choice(user) for i in range(8))))
 tlg =(f'''https://api.telegram.org/bot{tok}/sendMessage?chat_id={ID}&text=âŽâ€¢Ø´Ù€Ù€Ø±Ø§Ø³Ø© ØµÙ€Ù€Ø§Ø¯Ù„Ùƒ Ø­Ø³Ø§Ø¨ Ø¨ÙŠØ³ðŸ§‘â€ðŸ’».\n
â—†â”â”â”â”â”â”â—†âƒâ—†â”â”â”â”â—†.ðŸ‘‘.Email : â˜ž{username}
.ðŸ‘‘.Password : â˜ž +{us4}
.ðŸ‘‘. ð’•ð’Šð’Žð’† â˜ž 2022-2-17          â™¡â”â”â”â”ð“†©â˜†ð“†ªâ”â”â”â”â™¡
.ðŸ‘‘.BY: @MKDE_R''')
 i = requests.post(tlg)
 
