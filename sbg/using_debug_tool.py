import bcrypt

print(bcrypt.hashpw(b"password", bcrypt.gensalt()));
