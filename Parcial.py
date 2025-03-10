# Las lineas explicativas se veran al aparecer un (#)
def calcular_daño(placas, tipo_bala, daño_bala):# Definir variable de balas
    if tipo_bala == "1":
        daño_recibido = daño_bala - placas
    elif tipo_bala == "2":
        daño_recibido = daño_bala - (placas / 2)
    elif tipo_bala == "3":
        daño_recibido = daño_bala - placas
    else:
        return "No le diste :("
    
    if daño_bala > 50 and placas <= 20:# Definir cuando es daño critico
        daño_recibido *= 2
        print("¡DAÑO CRITICO!")
        
    
    return (daño_recibido)

placas = int(input("Ingrese la cantidad de placas (0 a 30): "))# Codigo para ecoger las variables a utilizar
print("Tipos de bala disponibles: 1, 2, 3")
print("1: Normal, 2: Perforante, 3: Explosiva")
bala = input("Ingrese el tipo de bala utilizada: ")
if bala == "1":
    daño_bala = int(input("Ingrese el daño de la bala (30 o 60): "))
elif bala == "2":
    daño_bala = int(input("Ingrese el daño de la bala perforante (30 o 60): "))
elif bala == "3":
    daño_bala = int(input("Ingrese el daño de la bala explosiva (60 o 90): "))
else:
    print("No tienes munición :(")
    exit()

resultado = calcular_daño(placas, bala, daño_bala) # Resultado
print(f"El daño recibido es: {resultado}")