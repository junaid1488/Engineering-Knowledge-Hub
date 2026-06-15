# AWS CLI Commands Cheat Sheet

## Configure AWS CLI

```bash
aws configure
aws sts get-caller-identity
```

---

## EC2 Commands

```bash
aws ec2 describe-instances
aws ec2 start-instances --instance-ids i-123
aws ec2 stop-instances --instance-ids i-123
aws ec2 reboot-instances --instance-ids i-123
aws ec2 terminate-instances --instance-ids i-123
```

---

## S3 Commands

```bash
aws s3 ls
aws s3 mb s3://mybucket
aws s3 cp file.txt s3://mybucket
aws s3 sync . s3://mybucket
aws s3 rm s3://mybucket/file.txt
```

---

## IAM Commands

```bash
aws iam list-users
aws iam list-roles
aws iam create-user devops
```

---

## CloudWatch Commands

```bash
aws logs describe-log-groups
aws logs tail /aws/lambda/app --follow
```

---

## VPC Commands

```bash
aws ec2 describe-vpcs
aws ec2 describe-subnets
aws ec2 describe-security-groups
```

---

## Top Interview Commands

```bash
aws configure
aws sts get-caller-identity
aws ec2 describe-instances
aws s3 ls
aws iam list-users
aws ec2 describe-security-groups
```
