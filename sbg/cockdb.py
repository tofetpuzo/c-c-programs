# import os

# import psycopg2

# conn = psycopg2.connect(os.environ["DATABASE_URL"])

# with conn.cursor() as cur:
#     cur.execute("SELECT now()")
#     res = cur.fetchall()
#     conn.commit()
#     print(res)

def method(i=[1, 2, 3, 4]):
    p = []
    for index in i:
        p.append(index)
    return p
# class ProductionClass:
#     def method(i=[1, 2, 3, 4]):
#         p = []
#         for index in i:
#             cls = p.append(index)
#         return cls

