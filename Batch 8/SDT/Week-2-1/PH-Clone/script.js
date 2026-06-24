const milestonesData = JSON.parse(jsonData).data;

console.log(milestonesData);

function loadMilestones() {
  const milestones = document.querySelector(".milestones");

  milestones.innerHTML = milestonesData.map(function (milestone) {
    return `<div class="milestone border-b">
            <div class="flex">
              <div class="checkbox"><input type="checkbox" /></div>

              <div onclick=openMilestone(this,${milestone._id}) >
                <p>
                  ${milestone.name}
                  <span><i class="fas fa-chevron-down"></i></span>
                </p>
              </div>

            </div>

            <div class="hidden_panel">
            ${milestone.modules.map(function (module) {
              return `<div class="module border-b">
                <p>${module.name}</p>
              </div>`;
            }).join("")}
              
            </div>

          </div>`;
  }).join("");
}

function openMilestone(milestoneCont, id) {
  const currentSection = milestoneCont.parentNode.nextElementSibling;

  const showSection = document.querySelector(".show");

  if(showSection){
    showSection.classList.remove("show");
  }

  currentSection.classList.toggle("show");


  modifyMilestone(id);


}

function modifyMilestone(id){
  const mImg = document.querySelector(".milestoneImage");
  const mTitle = document.querySelector(".title");
  const mDetails = document.querySelector(".details");

  mImg.src=milestonesData[id].image;
  mTitle.innerText=milestonesData[id].name;
  mDetails.innerText=milestonesData[id].description;
}

loadMilestones();
