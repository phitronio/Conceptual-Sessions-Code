const milestonesdata=JSON.parse(jsonData).data;
console.log(milestonesdata);

function loadMilstones(){

    const milstones=document.querySelector(".milestones");

    milstones.innerHTML=milestonesdata.map(function(milstone){

        return `
            <div class="milestone border-b">

            <div class="flex">
              <div class="checkbox"><input type="checkbox" /></div>

              <div  onclick=openMilestone(this,${milstone._id}) >
                <p>
                  ${milstone.name}
                  <span><i class="fas fa-chevron-down"></i></span>
                </p>
              </div>

            </div>


            <div class="hidden_panel">

                ${
                    milstone.modules.map(function(module){
                        return `
                        <div class="module border-b">
                            <p>${module.name}</p>
                        </div>
                        `;
                    }).join("")
            
                }
              
            </div>


          </div>
        `;

    }

).join("");


}



function openMilestone(milestoneCont,id){

    const currentSection = milestoneCont.parentNode.nextElementSibling;

    const showSection=document.querySelector(".show");

    if(!currentSection.classList.contains("show") && showSection){
        showSection.classList.remove("show");
    }

    currentSection.classList.toggle("show");

    modifyMilestone(id);

}

function modifyMilestone(id){

    const mImg=document.querySelector(".milestoneImage");
    const mTitle=document.querySelector(".title");
    const mDes=document.querySelector(".details");

    mImg.src=milestonesdata[id].image;
    mTitle.innerHTML=milestonesdata[id].name;
    mDes.innerHTML=milestonesdata[id].description;


}


loadMilstones();