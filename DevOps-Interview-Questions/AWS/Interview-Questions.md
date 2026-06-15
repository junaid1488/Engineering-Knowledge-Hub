# AWS Interview Questions

## 1. What is AWS?

Amazon Web Services (AWS) is a cloud computing platform that provides on-demand infrastructure and services.

---

## 2. What is Cloud Computing?

Delivering computing resources such as servers, storage, and databases over the internet.

---

## 3. What is EC2?

Amazon EC2 (Elastic Compute Cloud) provides virtual servers in the cloud.

---

## 4. What is S3?

Amazon S3 (Simple Storage Service) is an object storage service.

---

## 5. What is IAM?

Identity and Access Management (IAM) controls access to AWS resources.

---

## 6. What is a VPC?

A Virtual Private Cloud (VPC) is a logically isolated network in AWS.

---

## 7. What is a Security Group?

A virtual firewall that controls inbound and outbound traffic.

---

## 8. What is an AMI?

Amazon Machine Image used to launch EC2 instances.

---

## 9. What is EBS?

Elastic Block Store provides persistent storage for EC2 instances.

---

## 10. What is an Elastic IP?

A static public IP address for AWS resources.

---

## 11. What is a Load Balancer?

Distributes incoming traffic across multiple servers.

---

## 12. What is Auto Scaling?

Automatically adjusts the number of EC2 instances based on demand.

---

## 13. What is Route 53?

AWS DNS and domain management service.

---

## 14. What is CloudWatch?

Monitoring and logging service for AWS resources.

---

## 15. What is RDS?

Managed relational database service.

Examples:

* MySQL
* PostgreSQL
* MariaDB

---

## 16. What is CloudFormation?

Infrastructure as Code (IaC) service for AWS.

---

## 17. What is Lambda?

Serverless compute service that runs code without managing servers.

---

## 18. What is SNS?

Simple Notification Service used for alerts and notifications.

---

## 19. Difference Between Security Group and NACL?

| Security Group | NACL         |
| -------------- | ------------ |
| Instance Level | Subnet Level |
| Stateful       | Stateless    |

---

## 20. Most Asked Interview Question

### AWS Architecture for a Web Application

```text
User
 ↓
Route53
 ↓
Load Balancer
 ↓
EC2 Instances
 ↓
RDS
```
