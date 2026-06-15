# AWS Troubleshooting Interview Questions

## 1. EC2 Instance Not Reachable?

Check:

* Security Group
* NACL
* Route Table
* Public IP

---

## 2. Unable to SSH into EC2?

Verify:

* Key Pair
* Port 22 Open
* Security Group Rules

---

## 3. Website Not Accessible?

Check:

* EC2 Status
* Security Group
* Web Server (Nginx/Apache)

---

## 4. S3 Access Denied?

Check:

* IAM Policy
* Bucket Policy
* Object Permissions

---

## 5. EC2 Instance Running Slow?

Check:

* CPU Usage
* Memory Usage
* Disk Usage

Using CloudWatch.

---

## 6. Load Balancer Not Routing Traffic?

Verify:

* Target Group
* Health Checks
* Security Groups

---

## 7. Auto Scaling Not Working?

Check:

* Scaling Policies
* CloudWatch Alarms

---

## 8. Lambda Function Failing?

Check:

* CloudWatch Logs
* IAM Permissions
* Timeout Settings

---

## 9. RDS Connection Failed?

Verify:

* Endpoint
* Credentials
* Security Group

---

## 10. DNS Not Resolving?

Check:

* Route 53 Records
* Domain Configuration

---

## 11. High AWS Bill?

Check:

* Running EC2 Instances
* Unused EBS Volumes
* Data Transfer

---

## 12. Security Group Issue?

Verify:

* Inbound Rules
* Outbound Rules

---

## 13. IAM Permission Denied?

Check:

* User Policy
* Role Policy
* Resource Permissions

---

## 14. CloudWatch Logs Missing?

Verify:

* IAM Role
* Log Configuration

---

## 15. Most Asked Interview Question

### AWS Troubleshooting Workflow

1. Check Resource Status
2. Check Security Group
3. Check IAM Permissions
4. Check Logs
5. Verify Network
6. Validate Configuration

Services Used:

* CloudWatch
* IAM
* EC2
* VPC
* Route 53
