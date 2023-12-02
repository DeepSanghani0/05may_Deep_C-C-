<%@page import="com.dao.UserDao"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
    <jsp:useBean id="m2" class="com.model.Model2"/>
	<jsp:setProperty property="*" name="m2"/>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>

<%
	
	int status = UserDao.savedata2(m2);

	if(status>0)
	{
		//out.print("hello");
		response.sendRedirect("contact.jsp");
	}
	else
	{
		out.print("Fail");
	}
	
	
	
	
%>

</body>
</html>