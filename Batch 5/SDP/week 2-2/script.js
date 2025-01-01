document.addEventListener('DOMContentLoaded', ()=>{

  fetch('https://openapi.programming-hero.com/api/course/curriculum')
  .then(res => res.json())
  .then(data => {
    console.log(data);


    const curriculumContainer = document.getElementById('curriculum-container');

    curriculumContainer.previousElementSibling.querySelector('.badge').remove();

    data.data.forEach((milstone)=> {
      const milestonElement = document.createElement('div');
      milestonElement.className="mileston-element p-4 mb-3";
      milestonElement.id=""

      const milestonHeader = document.createElement('div');
      milestonHeader.className="mileston-header";
      milestonHeader.innerHTML = `
        <input type="checkbox" class="me-2" >
        <h5>${milstone.name} </h5>
        <i class="bi bi-chevron-down ms-auto" id="chevron-${milstone._id}"></i>
      `

      const modulesContainer = document.createElement('div');
      modulesContainer.className="modules-container d-none";
      modulesContainer.id="";

      if(milstone.modules){
        milstone.modules.forEach( (module) =>{
          const moduleElement = document.createElement('div');
          moduleElement.className="module-element p-2 border-bottom";
          moduleElement.textContent = module.name;
          modulesContainer.appendChild(moduleElement);
        })
      }

      milestonHeader.addEventListener('click', ()=> {
        const allModules = curriculumContainer.querySelectorAll('.modules-container');
        console.log(allModules);
        allModules.forEach((m) => {
          if(m !==modulesContainer){
            m.classList.add('d-none');
            const chevronOther = m.previousElementSibling.querySelector('i');
            console.log(chevronOther);
            chevronOther.classList.remove('bi-chevron-up');
            chevronOther.classList.add('bi-chevron-down');
          }
        })


        modulesContainer.classList.toggle('d-none');
        const chevron = milestonHeader.querySelector('i');
        chevron.classList.toggle('bi-chevron-down');
        chevron.classList.toggle('bi-chevron-up');

        const mainContent = document.querySelector('.main-content');
        mainContent.innerHTML = "";
        
        const imageElement = document.createElement('img');
        imageElement.src = `${milstone.image}`
        imageElement.alt = "milestone image";
        imageElement.className = "milestone-image img-fluid rounded";

        const titleElement = 
        `
        <h4 class="mt-2">${milstone.name}</h4>
        `
        // mainContent.innerHTML = titleElement;
        mainContent.appendChild(imageElement);
        mainContent.innerHTML+=titleElement;


      })

      milestonElement.appendChild(milestonHeader);
      milestonElement.appendChild(modulesContainer);
      curriculumContainer.appendChild(milestonElement)

    })
  })
})