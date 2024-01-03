class Account:
	def __init__(self,acc_no,acc_name,acc_type,acc_balence):
		self.acc_no=acc_no
		self.acc_name=acc_name
		self.acc_type=acc_type
		self.acc_balence=acc_balence
	
	def deposit(self,amt): 
		if amt>0:
			self.acc_balence=self.acc_balence+amt
			print("Rs ",amt,"Successfully Deposited")
		else:
			print("Inavlid Amount")
		
	def withdraw(self,amt):
		if amt>self.acc_balence:
		    print("Insufficent Balence")
		else:
			print("Rs ",amt,"Successfully Withdrawn")
			self.acc_balence=self.acc_balence-amt
	
	def view_details(self):
		print("Account No : ",self.acc_no,"\nName : ",self.acc_name,"\nType : ",self.acc_type,"\nBalence : ",self.acc_balence)

acc_no=int(input("Enter the account number : "))
acc_name=input("Enter the account holders name : ")
acc_type=input("Enter the account type : ")
acc_balence=int(input("Enter the account balance : "))

c1= Account(acc_no,acc_name,acc_type,acc_balence)

while True:
    print("1. Deposit\n2. Withdraw\n3. Current Balance\n4. View Details\n5. Exit")
    ch=int(input("Enter your choice : ")) 
    
    if ch==1:
        amt=int(input("Enter the amount to be deposited : "))
        c1.deposit(amt)
    elif ch==2:
        amt=int(input("Enter the amount to be withdrawn : "))
        c1.withdraw(amt)
    elif ch==3:
        print("Net Balance : ",c1.acc_balence)
    elif ch==4:
        c1.view_details()
    elif ch==5:
        break
