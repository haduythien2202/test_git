Sử dụng Git cơ bản:
- download git về máy và install bằng link https://git-scm.com/downloads (hoặc search git download trên gg).

- Sau khi tải Git về máy thì bạn đã có thể quản lý code ở local Repository( tức là máy của bạn đó), sau đây mình sẽ liệt kê một số lệnh Git cơ bản và thường được sử dụng nhất.

- để khởi tạo một local Repo thì có thể mở thư mục mà ta muốn dùng Git để quản lý và gọi command prompt hoặc nhấn chuột phải và chọn Git Bash
sau đó gõ lệnh:
git init

- để tracked một file ta dùng lệnh:
git add <tên file> 
hoặc "git add ." để tracked tất cả các file. nó giống như checkpoint trong game vậy. Khi bạn tracked một file và thay đổi file đó nhưng về sau bạn lại
muốn trả về code trước đó thì bạn có thể dùng lệnh:
git checkout -- <tên file muốn undo>

- để untracked một file ta sẽ dùng lệnh:
git rm -- cached <tên file>

- sau khi đã tracked ta có thể đưa code lên staging area bằng cách dùng lệnh:
git commit -m "". trong "" bạn có thể comment gì đó để thể hiện công việc bạn vừa làm với file.
=> sau khi commit sẽ tạo ra một branch( nhánh) master.

- để tạo ra những nhánh mới ngoài nhánh master ta có thể dùng một trong 2 lệnh sau:
git checkout -b <tên nhánh muốn tạo> (tạo ra nhánh và nhảy đến nhánh đó luôn)
git branch <tên nhánh muốn tạo> (tạo ra nhánh và vẫn ở yên nhánh đang ở)

- để kiểm tra mình đang ở nhánh nào ta có thể dung lệnh:
git branch 

- muốn nhảy sang nhánh khác ở local repo:
git checkout <tên nhánh muốn nhảy đến>

- để gộp nhánh (phải đứng ở branch muốn merge):
git merge <tên nhánh muốn merge>

- để xóa một nhánh đã tạo ta dùng lệnh:
git branch -d <tên nhánh muốn xóa> (nhánh sẽ được xóa nếu nó đã được merge với nhánh khác)
git branch -D <tên nhánh muốn xóa> (xóa nhánh mà không cần merge)

- sửa lỗi comment khi commit viết nhầm:
git commit --amend

- lỡ commit thiếu file những không muốn thay đổi comment:
git add <tên file quên add>
git commit -- amend

- để coi những snapshot được tạo mỗi lần commit ta có thể dùng lệnh:
git log

- mỗi lần commit ta sẽ đều tạo ra một snapshot để sau này có thể tái sử dụng lại, để có thể tái sử dụng những bản snapshot 
ta có thể dùng một trong những lệnh sau:
git reset --soft HEAD <số thứ tự của snapshot> (lười giải thích lắm tự test nhé)
git reset --hard HEAD <số thứ tự của snapshot> 