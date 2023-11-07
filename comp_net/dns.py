import socket
def get_domain_name(ip_address):
	result = socket.gethostbyaddr(ip_address)
	return list(result)[0]

def get_Host_name_IP(host_name):
	try:
	   # host_name = 'www.google.com'
           host_ip = socket.gethostbyname(host_name)
           print("Hostname : ",host_name)
           print("IP : ",host_ip)
	except:
           print("Unable to get Hostname and IP")

print("Domain name using PTR Dns:")
print(get_domain_name("8.8.8.8"))
print(get_domain_name("13.251.106.90"))
print(get_domain_name("8.8.4.4"))
print(get_domain_name("23.23.212.126"))

 
#Driver code
get_Host_name_IP('www.google.com') #Function call
