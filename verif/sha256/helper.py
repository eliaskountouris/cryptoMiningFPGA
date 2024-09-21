import hashlib

def padMessage(message):
    hexString = message.encode('utf-8') 
   # binString = bin(int(hexString, 16))[2:] 
    binString = ''.join(format(byte, '08b') for byte in hexString)
    length = len(binString)
    binString = ''.join([binString, '1'])
    binString = ''.join([binString, (448-length-1)*'0']) 
    binString = ''.join([binString, bin(length)[2:].zfill(64)]) 
    return binString

def binToIntList(bin):
    l = []
    for i in range(0, 512, 32):
        l.append(int(bin[i:i+32], 2)) 
    return l

def hexToIntList(hex):
    l = []
    for i in range(0, 64, 8):
        l.append(int(hex[i:i+8], 16)) 
    return l

    
def returnHash(message):
    s = hashlib.sha256(message.encode('utf-8'))
    r = s.hexdigest()
    return r

