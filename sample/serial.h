#ifndef _SERIAL_H_
#define _SERIAL_H_

int serial_init(int index);                       /* �ǥХ�������� */
int serial_is_send_enable(int index);             /* ������ǽ���� */
int serial_send_byte(int index, unsigned char b); /* ��ʸ������ */

#endif
