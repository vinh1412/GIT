# Bài tập lớn về ứng dụng tuyển dụng việc làm

## Giới thiệu về ứng dụng
Ứng dụng tuyển dụng việc làm là nền tảng kết nối nhà tuyển dụng và người tìm việc một cách nhanh chóng và hiệu quả. Với giao diện thân thiện, các gợi ý việc làm phù hợp, ứng dụng giúp ứng viên dễ dàng có cơ hội việc làm theo đúng kỹ năng. Đồng thời, nhà tuyển dụng có thể tuyển dụng thông qua việc đăng tin, quản lý ứng viên và liên lạc với ứng viên qua email một cách nhanh chóng.

## Công nghệ sử dụng trong dự án
**Frontend:**
  - HTML
  - CSS
  - JavaScript
  - Bootstrap

**Backend:**
  - Java kết hợp với Spring Boot
  - MariaDB hệ quản trị cơ sở dữ liệu quan hệ

## Mô tả các chức năng:
### Chức năng dành cho nhà tuyển dụng
1. **Đăng thông tin tuyển dụng**  
   - Nhà tuyển dụng có thể đăng các công việc kèm theo các kỹ năng yêu cầu.

2. **Chỉnh sửa thông tin tuyển dụng**  
   - Nhà tuyển dụng có thể cập nhật thông tin của công việc đã đăng.

3. **Tìm các ứng viên phù hợp**  
   - Hệ thống hỗ trợ lọc các ứng viên phù hợp với công việc đã đăng.

4. **Xóa thông tin tuyển dụng**  
   - Cho phép xóa các bài đăng công việc không còn tuyển dụng.

5. **Gửi lời mời tuyển dụng qua email**  
   - Hệ thống hỗ trợ gửi email mời ứng tuyển đến các ứng viên phù hợp.

6. **Chỉnh sửa thông tin nhà tuyển dụng**
   - Hệ thống cho phép nhà tuyển dụng có thể tự chỉnh sửa thông tin của mình.

7. **Tìm kiếm các bài đăng theo tên bài hoặc tên kỹ năng**
   - Hệ thống cho phép nhà tuyển dụng có thể tìm kiếm các công việc đã đăng tuyển theo tên bài hoặc tên kỹ năng.

### Chức năng dành cho ứng viên
1. **Tìm kiếm thông tin tuyển dụng**  
   - Tìm kiếm công việc theo:  
     - Tên tuyển dụng  
     - Tên nhà tuyển dụng  
     - Các kỹ năng cần thiết  

2. **Gợi ý kỹ năng cần học**  
   - Hệ thống gợi ý các kỹ năng còn thiếu để ứng viên có thể học thêm.

3. **Xem chi tiết các công việc được gợi ý**
   - Hệ thống cho phép ứng viên có thể xem chi tiết các thông tin của công việc như thông tin về công ty tuyển dụng, thông tin về các kỹ năng cần có.

4. **Chỉnh sửa thông tin ứng viên**
   - Hệ thống cho phép ứng viên có thể tự chỉnh sửa, cập nhật thêm thông tin, kỹ năng, kinh nghiệm làm việc.

5. **Gửi mail ứng tuyển**
   - Hệ thống cho phép ứng viên có thể gửi mail ứng tuyển công việc cho nhà tuyển dụng.
   
## Các giao diện ứng dụng

#### Render List Candidate No Paging
![PageListCandidateImage](https://i.ibb.co/3pHkQ5J/Candidate-No-Paging.png)
<br/>

#### Render List Candidate Paging
![PageListCandidatePTImage](https://i.ibb.co/cDk3Fs7/Candidate-Paging.png)
<br/>

#### Index Page
- Trang này sẽ hiển thị danh sách các công việc giúp các ứng viên có thể tìm kiếm công việc phù hợp, mỗi page hiển thị 12 công việc.
  
![index](https://github.com/user-attachments/assets/739c4db4-52cd-4e88-b0e1-bf6fa60d1689)
<br/>

#### Statis Page
- Trang này sẽ thống kê các kỹ năng nào được tuyển dụng nhiều nhất và các kỹ năng nào mà phổ biến thường có ở các ứng viên.
  
![Statis](https://github.com/user-attachments/assets/31091219-5b5f-42f2-8326-627c5146d707)
<br/>

#### Login Page
- Trang này cho phép ứng viên hoặc nhà tuyển dụng dùng mail đăng nhập vào trang chính để thực hiện các chức năng khác, nếu email không đúng sẽ thông báo lỗi.
  
![PageLoginImage](https://i.ibb.co/8zpmndV/Login.png)
<br/>

#### Sign Up For Candidate Page
- Trang này dùng để đăng ký thông tin cho ứng viên, bao gồm các trường như: tên ứng viên, ngày sinh, skill, kinh nghiệm,…và cho phép người dùng có thể thêm skill hoặc kinh nghiệm mới.
  
![SignUpCandidate](https://github.com/user-attachments/assets/4475ac4a-4f00-4977-bbb7-364a448b537d)
<br/>

#### Sign Up For Company Page
- Trang này giúp cho nhà tuyển dụng có thể đăng ký thông tin của công ty như: tên nhà tuyển dụng, địa chỉ,…
  
![SignUpCompany](https://github.com/user-attachments/assets/fc39d34e-c1f5-42ed-9383-5eadd2c41638)
<br/>

#### Dashboard Company
- Trang này hiển thị danh sách các công việc mà nhà tuyển dụng đã đăng tuyển.
  
![dashboard_company](https://github.com/user-attachments/assets/6bc5afc8-e479-4308-bef6-95ac245eeb96)
<br/>

#### Edit Company Page
- Trang này cho phép nhà tuyển dụng chỉnh sửa, cập nhật các thông tin của mình.
  
![EditCompany](https://github.com/user-attachments/assets/54860a9c-238d-42fe-ba2b-f8074e0647a8)
<br/>

#### Add Job Page
- Trang này giúp cho nhà tuyển dụng có thể đăng công việc tuyển dụng, có thể thêm các skill mới, trang chỉ hiển thị 5 skill đại diện, nếu nhà tuyển dụng muốn thêm skill mới thì có thể nhấn vào thêm skill khác.
  
![FormAddJob](https://github.com/user-attachments/assets/f7512dc2-a137-4aed-a7a8-5ce89b02148d)
<br/>

#### Edit Job Page
- Trang này cho phép nhà tuyển dụng có thể chỉnh sửa lại thông tin của công việc mình đã đăng tuyển.
  
![FormEditJob](https://github.com/user-attachments/assets/137fb3e9-99a3-4b44-bbbc-5f3c8be87366)
<br/>

#### Find Candidate For Job Page
- Trang này cho phép nhà tuyển dụng biết chi tiết về thông tin của các ứng viên phù hợp với công việc mình đã đăng tuyển, biết các kinh nghiệm làm việc của ứng viên và có thể gửi mail mời ứng viên phỏng vấn.
  
![InviteCandidate](https://github.com/user-attachments/assets/0b2c1a8c-6474-4a7a-a194-129000c1df5b)
<br/>

#### Dashboard Candidate
- Trang này hiển thị danh sách các công việc phù hợp với skill mà ứng viên đang có để ứng viên có thể dễ dàng chọn công việc phù hợp.
  
![PageDashboardCandidateImage](https://i.ibb.co/XYc62tj/Dashboard-Candidate.png)
<br/>

#### Edit Candidate Page
- Trang này giúp ứng viên có thể chỉnh sửa thông tin của mình, có thể thêm các skill hoặc kinh nghiệm mới.
  
![EditCandidate](https://github.com/user-attachments/assets/6285353b-23cd-40c1-b0af-692dde818e3e)
<br/>

#### Recommend Skill For Candidate Page
- Trang này hiển thị danh sách top 5 skill mà ứng viên chưa có để có thể học để nâng cấp profile của mình.
  
![PageSuggestSkillImage](https://i.ibb.co/YjV99Sf/Sugesst-Skill-Candidate.png)
<br/>

#### Job Detail Page
- Trang này hiển thị chi tiết công việc như: tên công việc, các skill yêu cầu và level của skill và các thông tin chi tiết của nhà tuyển dụng để ứng viên có thể liên hệ ứng tuyển.
  
![JobDetail](https://github.com/user-attachments/assets/83aaab2a-8dd8-48ff-b71f-4f3a9caabf30)
<br/>

#### Send Mail Apply Job Page
- Trang này cho phép ứng viên có thể gửi mail ứng tuyển cho nhà tuyển dụng về công việc vừa xem.
  
![ApplyJob](https://github.com/user-attachments/assets/8c7c67a2-aa7d-434c-8e12-a9def2f65672)

