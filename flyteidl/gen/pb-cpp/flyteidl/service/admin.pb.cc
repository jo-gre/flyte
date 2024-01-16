// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/service/admin.proto

#include "flyteidl/service/admin.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace flyteidl {
namespace service {
}  // namespace service
}  // namespace flyteidl
void InitDefaults_flyteidl_2fservice_2fadmin_2eproto() {
}

constexpr ::google::protobuf::Metadata* file_level_metadata_flyteidl_2fservice_2fadmin_2eproto = nullptr;
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_flyteidl_2fservice_2fadmin_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_flyteidl_2fservice_2fadmin_2eproto = nullptr;
const ::google::protobuf::uint32 TableStruct_flyteidl_2fservice_2fadmin_2eproto::offsets[1] = {};
static constexpr ::google::protobuf::internal::MigrationSchema* schemas = nullptr;
static constexpr ::google::protobuf::Message* const* file_default_instances = nullptr;

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_flyteidl_2fservice_2fadmin_2eproto = {
  {}, AddDescriptors_flyteidl_2fservice_2fadmin_2eproto, "flyteidl/service/admin.proto", schemas,
  file_default_instances, TableStruct_flyteidl_2fservice_2fadmin_2eproto::offsets,
  file_level_metadata_flyteidl_2fservice_2fadmin_2eproto, 0, file_level_enum_descriptors_flyteidl_2fservice_2fadmin_2eproto, file_level_service_descriptors_flyteidl_2fservice_2fadmin_2eproto,
};

const char descriptor_table_protodef_flyteidl_2fservice_2fadmin_2eproto[] =
  "\n\034flyteidl/service/admin.proto\022\020flyteidl"
  ".service\032\034google/api/annotations.proto\032\034"
  "flyteidl/admin/project.proto\032.flyteidl/a"
  "dmin/project_domain_attributes.proto\032\'fl"
  "yteidl/admin/project_attributes.proto\032\031f"
  "lyteidl/admin/task.proto\032\035flyteidl/admin"
  "/workflow.proto\032(flyteidl/admin/workflow"
  "_attributes.proto\032 flyteidl/admin/launch"
  "_plan.proto\032\032flyteidl/admin/event.proto\032"
  "\036flyteidl/admin/execution.proto\032\'flyteid"
  "l/admin/matchable_resource.proto\032#flytei"
  "dl/admin/node_execution.proto\032#flyteidl/"
  "admin/task_execution.proto\032\034flyteidl/adm"
  "in/version.proto\032\033flyteidl/admin/common."
  "proto\032\'flyteidl/admin/description_entity"
  ".proto2\265q\n\014AdminService\022m\n\nCreateTask\022!."
  "flyteidl.admin.TaskCreateRequest\032\".flyte"
  "idl.admin.TaskCreateResponse\"\030\202\323\344\223\002\022\"\r/a"
  "pi/v1/tasks:\001*\022\330\001\n\007GetTask\022 .flyteidl.ad"
  "min.ObjectGetRequest\032\024.flyteidl.admin.Ta"
  "sk\"\224\001\202\323\344\223\002\215\001\022=/api/v1/tasks/{id.project}"
  "/{id.domain}/{id.name}/{id.version}ZL\022J/"
  "api/v1/tasks/org/{id.org}/{id.project}/{"
  "id.domain}/{id.name}/{id.version}\022\305\001\n\013Li"
  "stTaskIds\0220.flyteidl.admin.NamedEntityId"
  "entifierListRequest\032).flyteidl.admin.Nam"
  "edEntityIdentifierList\"Y\202\323\344\223\002S\022#/api/v1/"
  "task_ids/{project}/{domain}Z,\022*/api/v1/t"
  "asks/org/{org}/{project}/{domain}\022\250\002\n\tLi"
  "stTasks\022#.flyteidl.admin.ResourceListReq"
  "uest\032\030.flyteidl.admin.TaskList\"\333\001\202\323\344\223\002\324\001"
  "\0220/api/v1/tasks/{id.project}/{id.domain}"
  "/{id.name}Z\?\022=/api/v1/tasks/org/{id.org}"
  "/{id.project}/{id.domain}/{id.name}Z(\022&/"
  "api/v1/tasks/{id.project}/{id.domain}Z5\022"
  "3/api/v1/tasks/org/{id.org}/{id.project}"
  "/{id.domain}\022}\n\016CreateWorkflow\022%.flyteid"
  "l.admin.WorkflowCreateRequest\032&.flyteidl"
  ".admin.WorkflowCreateResponse\"\034\202\323\344\223\002\026\"\021/"
  "api/v1/workflows:\001*\022\350\001\n\013GetWorkflow\022 .fl"
  "yteidl.admin.ObjectGetRequest\032\030.flyteidl"
  ".admin.Workflow\"\234\001\202\323\344\223\002\225\001\022A/api/v1/workf"
  "lows/{id.project}/{id.domain}/{id.name}/"
  "{id.version}ZP\022N/api/v1/workflows/org/{i"
  "d.org}/{id.project}/{id.domain}/{id.name"
  "}/{id.version}\022\321\001\n\017ListWorkflowIds\0220.fly"
  "teidl.admin.NamedEntityIdentifierListReq"
  "uest\032).flyteidl.admin.NamedEntityIdentif"
  "ierList\"a\202\323\344\223\002[\022\'/api/v1/workflow_ids/{p"
  "roject}/{domain}Z0\022./api/v1/workflows/or"
  "g/{org}/{project}/{domain}\022\300\002\n\rListWorkf"
  "lows\022#.flyteidl.admin.ResourceListReques"
  "t\032\034.flyteidl.admin.WorkflowList\"\353\001\202\323\344\223\002\344"
  "\001\0224/api/v1/workflows/{id.project}/{id.do"
  "main}/{id.name}ZC\022A/api/v1/workflows/org"
  "/{id.org}/{id.project}/{id.domain}/{id.n"
  "ame}Z,\022*/api/v1/workflows/{id.project}/{"
  "id.domain}Z9\0227/api/v1/workflows/org/{id."
  "org}/{id.project}/{id.domain}\022\206\001\n\020Create"
  "LaunchPlan\022\'.flyteidl.admin.LaunchPlanCr"
  "eateRequest\032(.flyteidl.admin.LaunchPlanC"
  "reateResponse\"\037\202\323\344\223\002\031\"\024/api/v1/launch_pl"
  "ans:\001*\022\362\001\n\rGetLaunchPlan\022 .flyteidl.admi"
  "n.ObjectGetRequest\032\032.flyteidl.admin.Laun"
  "chPlan\"\242\001\202\323\344\223\002\233\001\022D/api/v1/launch_plans/{"
  "id.project}/{id.domain}/{id.name}/{id.ve"
  "rsion}ZS\022Q/api/v1/launch_plans/org/{id.o"
  "rg}/{id.project}/{id.domain}/{id.name}/{"
  "id.version}\022\363\001\n\023GetActiveLaunchPlan\022\'.fl"
  "yteidl.admin.ActiveLaunchPlanRequest\032\032.f"
  "lyteidl.admin.LaunchPlan\"\226\001\202\323\344\223\002\217\001\022>/api"
  "/v1/active_launch_plans/{id.project}/{id"
  ".domain}/{id.name}ZM\022K/api/v1/active_lau"
  "nch_plans/org/{id.org}/{id.project}/{id."
  "domain}/{id.name}\022\234\001\n\025ListActiveLaunchPl"
  "ans\022+.flyteidl.admin.ActiveLaunchPlanLis"
  "tRequest\032\036.flyteidl.admin.LaunchPlanList"
  "\"6\202\323\344\223\0020\022./api/v1/active_launch_plans/{p"
  "roject}/{domain}\022\334\001\n\021ListLaunchPlanIds\0220"
  ".flyteidl.admin.NamedEntityIdentifierLis"
  "tRequest\032).flyteidl.admin.NamedEntityIde"
  "ntifierList\"j\202\323\344\223\002d\022*/api/v1/launch_plan"
  "_ids/{project}/{domain}Z6\0224/api/v1/launc"
  "h_plan_ids/org/{org}/{project}/{domain}\022"
  "\320\002\n\017ListLaunchPlans\022#.flyteidl.admin.Res"
  "ourceListRequest\032\036.flyteidl.admin.Launch"
  "PlanList\"\367\001\202\323\344\223\002\360\001\0227/api/v1/launch_plans"
  "/{id.project}/{id.domain}/{id.name}ZF\022D/"
  "api/v1/launch_plans/org/{id.org}/{id.pro"
  "ject}/{id.domain}/{id.name}Z/\022-/api/v1/l"
  "aunch_plans/{id.project}/{id.domain}Z<\022:"
  "/api/v1/launch_plans/org/{id.org}/{id.pr"
  "oject}/{id.domain}\022\215\002\n\020UpdateLaunchPlan\022"
  "\'.flyteidl.admin.LaunchPlanUpdateRequest"
  "\032(.flyteidl.admin.LaunchPlanUpdateRespon"
  "se\"\245\001\202\323\344\223\002\236\001\032D/api/v1/launch_plans/{id.p"
  "roject}/{id.domain}/{id.name}/{id.versio"
  "n}:\001*ZS\032Q/api/v1/launch_plans/org/{id.or"
  "g}/{id.project}/{id.domain}/{id.name}/{i"
  "d.version}\022\201\001\n\017CreateExecution\022&.flyteid"
  "l.admin.ExecutionCreateRequest\032\'.flyteid"
  "l.admin.ExecutionCreateResponse\"\035\202\323\344\223\002\027\""
  "\022/api/v1/executions:\001*\022\216\001\n\021RelaunchExecu"
  "tion\022(.flyteidl.admin.ExecutionRelaunchR"
  "equest\032\'.flyteidl.admin.ExecutionCreateR"
  "esponse\"&\202\323\344\223\002 \"\033/api/v1/executions/rela"
  "unch:\001*\022\213\001\n\020RecoverExecution\022\'.flyteidl."
  "admin.ExecutionRecoverRequest\032\'.flyteidl"
  ".admin.ExecutionCreateResponse\"%\202\323\344\223\002\037\"\032"
  "/api/v1/executions/recover:\001*\022\334\001\n\014GetExe"
  "cution\022+.flyteidl.admin.WorkflowExecutio"
  "nGetRequest\032\031.flyteidl.admin.Execution\"\203"
  "\001\202\323\344\223\002}\0225/api/v1/executions/{id.project}"
  "/{id.domain}/{id.name}ZD\022B/api/v1/execut"
  "ions/org/{id.org}/{id.project}/{id.domai"
  "n}/{id.name}\022\357\001\n\017UpdateExecution\022&.flyte"
  "idl.admin.ExecutionUpdateRequest\032\'.flyte"
  "idl.admin.ExecutionUpdateResponse\"\212\001\202\323\344\223"
  "\002\203\001\0325/api/v1/executions/{id.project}/{id"
  ".domain}/{id.name}:\001*ZG\032B/api/v1/executi"
  "ons/org/{id.org}/{id.project}/{id.domain"
  "}/{id.name}:\001*\022\206\002\n\020GetExecutionData\022/.fl"
  "yteidl.admin.WorkflowExecutionGetDataReq"
  "uest\0320.flyteidl.admin.WorkflowExecutionG"
  "etDataResponse\"\216\001\202\323\344\223\002\207\001\022:/api/v1/data/e"
  "xecutions/{id.project}/{id.domain}/{id.n"
  "ame}ZI\022G/api/v1/data/executions/org/{id."
  "org}/{id.project}/{id.domain}/{id.name}\022"
  "\305\001\n\016ListExecutions\022#.flyteidl.admin.Reso"
  "urceListRequest\032\035.flyteidl.admin.Executi"
  "onList\"o\202\323\344\223\002i\022+/api/v1/executions/{id.p"
  "roject}/{id.domain}Z:\0228/api/v1/execution"
  "s/org/{id.org}/{id.project}/{id.domain}\022"
  "\375\001\n\022TerminateExecution\022).flyteidl.admin."
  "ExecutionTerminateRequest\032*.flyteidl.adm"
  "in.ExecutionTerminateResponse\"\217\001\202\323\344\223\002\210\001*"
  "5/api/v1/executions/{id.project}/{id.dom"
  "ain}/{id.name}:\001*ZL*G/api/v1/data/execut"
  "ions/org/{id.org}/{id.project}/{id.domai"
  "n}/{id.name}:\001*\022\342\002\n\020GetNodeExecution\022\'.f"
  "lyteidl.admin.NodeExecutionGetRequest\032\035."
  "flyteidl.admin.NodeExecution\"\205\002\202\323\344\223\002\376\001\022n"
  "/api/v1/node_executions/{id.execution_id"
  ".project}/{id.execution_id.domain}/{id.e"
  "xecution_id.name}/{id.node_id}Z\213\001\022\210\001/api"
  "/v1/node_executions/org/{id.execution_id"
  ".org}/{id.execution_id.project}/{id.exec"
  "ution_id.domain}/{id.execution_id.name}/"
  "{id.node_id}\022\371\002\n\022ListNodeExecutions\022(.fl"
  "yteidl.admin.NodeExecutionListRequest\032!."
  "flyteidl.admin.NodeExecutionList\"\225\002\202\323\344\223\002"
  "\216\002\022s/api/v1/node_executions/{workflow_ex"
  "ecution_id.project}/{workflow_execution_"
  "id.domain}/{workflow_execution_id.name}Z"
  "\226\001\022\223\001/api/v1/node_executions/org/{workfl"
  "ow_execution_id.org}/{workflow_execution"
  "_id.project}/{workflow_execution_id.doma"
  "in}/{workflow_execution_id.name}\022\217\010\n\031Lis"
  "tNodeExecutionsForTask\022/.flyteidl.admin."
  "NodeExecutionForTaskListRequest\032!.flytei"
  "dl.admin.NodeExecutionList\"\235\007\202\323\344\223\002\226\007\022\251\003/"
  "api/v1/children/task_executions/{task_ex"
  "ecution_id.node_execution_id.execution_i"
  "d.project}/{task_execution_id.node_execu"
  "tion_id.execution_id.domain}/{task_execu"
  "tion_id.node_execution_id.execution_id.n"
  "ame}/{task_execution_id.node_execution_i"
  "d.node_id}/{task_execution_id.task_id.pr"
  "oject}/{task_execution_id.task_id.domain"
  "}/{task_execution_id.task_id.name}/{task"
  "_execution_id.task_id.version}/{task_exe"
  "cution_id.retry_attempt}Z\347\003\022\344\003/api/v1/ch"
  "ildren/task_executions/org/{task_executi"
  "on_id.node_execution_id.execution_id.org"
  "}/{task_execution_id.node_execution_id.e"
  "xecution_id.project}/{task_execution_id."
  "node_execution_id.execution_id.domain}/{"
  "task_execution_id.node_execution_id.exec"
  "ution_id.name}/{task_execution_id.node_e"
  "xecution_id.node_id}/{task_execution_id."
  "task_id.project}/{task_execution_id.task"
  "_id.domain}/{task_execution_id.task_id.n"
  "ame}/{task_execution_id.task_id.version}"
  "/{task_execution_id.retry_attempt}\022\203\003\n\024G"
  "etNodeExecutionData\022+.flyteidl.admin.Nod"
  "eExecutionGetDataRequest\032,.flyteidl.admi"
  "n.NodeExecutionGetDataResponse\"\217\002\202\323\344\223\002\210\002"
  "\022s/api/v1/data/node_executions/{id.execu"
  "tion_id.project}/{id.execution_id.domain"
  "}/{id.execution_id.name}/{id.node_id}Z\220\001"
  "\022\215\001/api/v1/data/node_executions/org/{id."
  "execution_id.org}/{id.execution_id.proje"
  "ct}/{id.execution_id.domain}/{id.executi"
  "on_id.name}/{id.node_id}\022\177\n\017RegisterProj"
  "ect\022&.flyteidl.admin.ProjectRegisterRequ"
  "est\032\'.flyteidl.admin.ProjectRegisterResp"
  "onse\"\033\202\323\344\223\002\025\"\020/api/v1/projects:\001*\022\227\001\n\rUp"
  "dateProject\022\027.flyteidl.admin.Project\032%.f"
  "lyteidl.admin.ProjectUpdateResponse\"F\202\323\344"
  "\223\002@\032\025/api/v1/projects/{id}:\001*Z$\032\037/api/v1"
  "/projects/org/{org}/{id}:\001*\022f\n\014ListProje"
  "cts\022\".flyteidl.admin.ProjectListRequest\032"
  "\030.flyteidl.admin.Projects\"\030\202\323\344\223\002\022\022\020/api/"
  "v1/projects\022\231\001\n\023CreateWorkflowEvent\022-.fl"
  "yteidl.admin.WorkflowExecutionEventReque"
  "st\032..flyteidl.admin.WorkflowExecutionEve"
  "ntResponse\"#\202\323\344\223\002\035\"\030/api/v1/events/workf"
  "lows:\001*\022\211\001\n\017CreateNodeEvent\022).flyteidl.a"
  "dmin.NodeExecutionEventRequest\032*.flyteid"
  "l.admin.NodeExecutionEventResponse\"\037\202\323\344\223"
  "\002\031\"\024/api/v1/events/nodes:\001*\022\211\001\n\017CreateTa"
  "skEvent\022).flyteidl.admin.TaskExecutionEv"
  "entRequest\032*.flyteidl.admin.TaskExecutio"
  "nEventResponse\"\037\202\323\344\223\002\031\"\024/api/v1/events/t"
  "asks:\001*\022\313\005\n\020GetTaskExecution\022\'.flyteidl."
  "admin.TaskExecutionGetRequest\032\035.flyteidl"
  ".admin.TaskExecution\"\356\004\202\323\344\223\002\347\004\022\231\002/api/v1"
  "/task_executions/{id.node_execution_id.e"
  "xecution_id.project}/{id.node_execution_"
  "id.execution_id.domain}/{id.node_executi"
  "on_id.execution_id.name}/{id.node_execut"
  "ion_id.node_id}/{id.task_id.project}/{id"
  ".task_id.domain}/{id.task_id.name}/{id.t"
  "ask_id.version}/{id.retry_attempt}Z\310\002\022\305\002"
  "/api/v1/task_executions/org/{id.node_exe"
  "cution_id.execution_id.org}/{id.node_exe"
  "cution_id.execution_id.project}/{id.node"
  "_execution_id.execution_id.domain}/{id.n"
  "ode_execution_id.execution_id.name}/{id."
  "node_execution_id.node_id}/{id.task_id.p"
  "roject}/{id.task_id.domain}/{id.task_id."
  "name}/{id.task_id.version}/{id.retry_att"
  "empt}\022\361\003\n\022ListTaskExecutions\022(.flyteidl."
  "admin.TaskExecutionListRequest\032!.flyteid"
  "l.admin.TaskExecutionList\"\215\003\202\323\344\223\002\206\003\022\252\001/a"
  "pi/v1/task_executions/{node_execution_id"
  ".execution_id.project}/{node_execution_i"
  "d.execution_id.domain}/{node_execution_i"
  "d.execution_id.name}/{node_execution_id."
  "node_id}Z\326\001\022\323\001/api/v1/task_executions/or"
  "g/{node_execution_id.execution_id.org}/{"
  "node_execution_id.execution_id.project}/"
  "{node_execution_id.execution_id.domain}/"
  "{node_execution_id.execution_id.name}/{n"
  "ode_execution_id.node_id}\022\354\005\n\024GetTaskExe"
  "cutionData\022+.flyteidl.admin.TaskExecutio"
  "nGetDataRequest\032,.flyteidl.admin.TaskExe"
  "cutionGetDataResponse\"\370\004\202\323\344\223\002\361\004\022\236\002/api/v"
  "1/data/task_executions/{id.node_executio"
  "n_id.execution_id.project}/{id.node_exec"
  "ution_id.execution_id.domain}/{id.node_e"
  "xecution_id.execution_id.name}/{id.node_"
  "execution_id.node_id}/{id.task_id.projec"
  "t}/{id.task_id.domain}/{id.task_id.name}"
  "/{id.task_id.version}/{id.retry_attempt}"
  "Z\315\002\022\312\002/api/v1/data/task_executions/org/{"
  "id.node_execution_id.execution_id.org}/{"
  "id.node_execution_id.execution_id.projec"
  "t}/{id.node_execution_id.execution_id.do"
  "main}/{id.node_execution_id.execution_id"
  ".name}/{id.node_execution_id.node_id}/{i"
  "d.task_id.project}/{id.task_id.domain}/{"
  "id.task_id.name}/{id.task_id.version}/{i"
  "d.retry_attempt}\022\313\002\n\035UpdateProjectDomain"
  "Attributes\0224.flyteidl.admin.ProjectDomai"
  "nAttributesUpdateRequest\0325.flyteidl.admi"
  "n.ProjectDomainAttributesUpdateResponse\""
  "\274\001\202\323\344\223\002\265\001\032J/api/v1/project_domain_attrib"
  "utes/{attributes.project}/{attributes.do"
  "main}:\001*Zd\032_/api/v1/project_domain_attri"
  "butes/org/{attributes.org}/{attributes.p"
  "roject}/{attributes.domain}:\001*\022\203\002\n\032GetPr"
  "ojectDomainAttributes\0221.flyteidl.admin.P"
  "rojectDomainAttributesGetRequest\0322.flyte"
  "idl.admin.ProjectDomainAttributesGetResp"
  "onse\"~\202\323\344\223\002x\0224/api/v1/project_domain_att"
  "ributes/{project}/{domain}Z@\022>/api/v1/pr"
  "oject_domain_attributes/org/{org}/{proje"
  "ct}/{domain}\022\223\002\n\035DeleteProjectDomainAttr"
  "ibutes\0224.flyteidl.admin.ProjectDomainAtt"
  "ributesDeleteRequest\0325.flyteidl.admin.Pr"
  "ojectDomainAttributesDeleteResponse\"\204\001\202\323"
  "\344\223\002~*4/api/v1/project_domain_attributes/"
  "{project}/{domain}:\001*ZC*>/api/v1/project"
  "_domain_attributes/org/{org}/{project}/{"
  "domain}:\001*\022\212\002\n\027UpdateProjectAttributes\022."
  ".flyteidl.admin.ProjectAttributesUpdateR"
  "equest\032/.flyteidl.admin.ProjectAttribute"
  "sUpdateResponse\"\215\001\202\323\344\223\002\206\001\032//api/v1/proje"
  "ct_attributes/{attributes.project}:\001*ZP\032"
  "K/api/v1/project_domain_attributes/org/{"
  "attributes.org}/{attributes.project}:\001*\022"
  "\330\001\n\024GetProjectAttributes\022+.flyteidl.admi"
  "n.ProjectAttributesGetRequest\032,.flyteidl"
  ".admin.ProjectAttributesGetResponse\"e\202\323\344"
  "\223\002_\022$/api/v1/project_attributes/{project"
  "}Z7\0225/api/v1/project_domain_attributes/o"
  "rg/{org}/{project}\022\347\001\n\027DeleteProjectAttr"
  "ibutes\022..flyteidl.admin.ProjectAttribute"
  "sDeleteRequest\032/.flyteidl.admin.ProjectA"
  "ttributesDeleteResponse\"k\202\323\344\223\002e*$/api/v1"
  "/project_attributes/{project}:\001*Z:*5/api"
  "/v1/project_domain_attributes/org/{org}/"
  "{project}:\001*\022\334\002\n\030UpdateWorkflowAttribute"
  "s\022/.flyteidl.admin.WorkflowAttributesUpd"
  "ateRequest\0320.flyteidl.admin.WorkflowAttr"
  "ibutesUpdateResponse\"\334\001\202\323\344\223\002\325\001\032Z/api/v1/"
  "workflow_attributes/{attributes.project}"
  "/{attributes.domain}/{attributes.workflo"
  "w}:\001*Zt\032o/api/v1/workflow_attributes/org"
  "/{attributes.org}/{attributes.project}/{"
  "attributes.domain}/{attributes.workflow}"
  ":\001*\022\200\002\n\025GetWorkflowAttributes\022,.flyteidl"
  ".admin.WorkflowAttributesGetRequest\032-.fl"
  "yteidl.admin.WorkflowAttributesGetRespon"
  "se\"\211\001\202\323\344\223\002\202\001\0229/api/v1/workflow_attribute"
  "s/{project}/{domain}/{workflow}ZE\022C/api/"
  "v1/workflow_attributes/org/{org}/{projec"
  "t}/{domain}/{workflow}\022\217\002\n\030DeleteWorkflo"
  "wAttributes\022/.flyteidl.admin.WorkflowAtt"
  "ributesDeleteRequest\0320.flyteidl.admin.Wo"
  "rkflowAttributesDeleteResponse\"\217\001\202\323\344\223\002\210\001"
  "*9/api/v1/workflow_attributes/{project}/"
  "{domain}/{workflow}:\001*ZH*C/api/v1/workfl"
  "ow_attributes/org/{org}/{project}/{domai"
  "n}/{workflow}:\001*\022\240\001\n\027ListMatchableAttrib"
  "utes\022..flyteidl.admin.ListMatchableAttri"
  "butesRequest\032/.flyteidl.admin.ListMatcha"
  "bleAttributesResponse\"$\202\323\344\223\002\036\022\034/api/v1/m"
  "atchable_attributes\022\350\001\n\021ListNamedEntitie"
  "s\022&.flyteidl.admin.NamedEntityListReques"
  "t\032\037.flyteidl.admin.NamedEntityList\"\211\001\202\323\344"
  "\223\002\202\001\0229/api/v1/named_entities/{resource_t"
  "ype}/{project}/{domain}ZE\022C/api/v1/named"
  "_entities/{resource_type}/org/{org}/{pro"
  "ject}/{domain}\022\203\002\n\016GetNamedEntity\022%.flyt"
  "eidl.admin.NamedEntityGetRequest\032\033.flyte"
  "idl.admin.NamedEntity\"\254\001\202\323\344\223\002\245\001\022I/api/v1"
  "/named_entities/{resource_type}/{id.proj"
  "ect}/{id.domain}/{id.name}ZX\022V/api/v1/na"
  "med_entities/{resource_type}/org/{id.org"
  "}/{id.project}/{id.domain}/{id.name}\022\235\002\n"
  "\021UpdateNamedEntity\022(.flyteidl.admin.Name"
  "dEntityUpdateRequest\032).flyteidl.admin.Na"
  "medEntityUpdateResponse\"\262\001\202\323\344\223\002\253\001\032I/api/"
  "v1/named_entities/{resource_type}/{id.pr"
  "oject}/{id.domain}/{id.name}:\001*Z[\032V/api/"
  "v1/named_entities/{resource_type}/org/{i"
  "d.org}/{id.project}/{id.domain}/{id.name"
  "}:\001*\022l\n\nGetVersion\022!.flyteidl.admin.GetV"
  "ersionRequest\032\".flyteidl.admin.GetVersio"
  "nResponse\"\027\202\323\344\223\002\021\022\017/api/v1/version\022\266\002\n\024G"
  "etDescriptionEntity\022 .flyteidl.admin.Obj"
  "ectGetRequest\032!.flyteidl.admin.Descripti"
  "onEntity\"\330\001\202\323\344\223\002\321\001\022_/api/v1/description_"
  "entities/{id.resource_type}/{id.project}"
  "/{id.domain}/{id.name}/{id.version}Zn\022l/"
  "api/v1/description_entities/org/{id.org}"
  "/{id.resource_type}/{id.project}/{id.dom"
  "ain}/{id.name}/{id.version}\022\310\003\n\027ListDesc"
  "riptionEntities\022,.flyteidl.admin.Descrip"
  "tionEntityListRequest\032%.flyteidl.admin.D"
  "escriptionEntityList\"\327\002\202\323\344\223\002\320\002\022O/api/v1/"
  "description_entities/{resource_type}/{id"
  ".project}/{id.domain}/{id.name}Z^\022\\/api/"
  "v1/description_entities/{resource_type}/"
  "org/{id.org}/{id.project}/{id.domain}/{i"
  "d.name}ZG\022E/api/v1/description_entities/"
  "{resource_type}/{id.project}/{id.domain}"
  "ZT\022R/api/v1/description_entities/{resour"
  "ce_type}/org/{id.org}/{id.project}/{id.d"
  "omain}\022\225\002\n\023GetExecutionMetrics\0222.flyteid"
  "l.admin.WorkflowExecutionGetMetricsReque"
  "st\0323.flyteidl.admin.WorkflowExecutionGet"
  "MetricsResponse\"\224\001\202\323\344\223\002\215\001\022=/api/v1/metri"
  "cs/executions/{id.project}/{id.domain}/{"
  "id.name}ZL\022J/api/v1/metrics/executions/o"
  "rg/{id.org}/{id.project}/{id.domain}/{id"
  ".name}B\?Z=github.com/flyteorg/flyte/flyt"
  "eidl/gen/pb-go/flyteidl/serviceb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_flyteidl_2fservice_2fadmin_2eproto = {
  false, InitDefaults_flyteidl_2fservice_2fadmin_2eproto, 
  descriptor_table_protodef_flyteidl_2fservice_2fadmin_2eproto,
  "flyteidl/service/admin.proto", &assign_descriptors_table_flyteidl_2fservice_2fadmin_2eproto, 15199,
};

void AddDescriptors_flyteidl_2fservice_2fadmin_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[16] =
  {
    ::AddDescriptors_google_2fapi_2fannotations_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fproject_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fproject_5fdomain_5fattributes_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fproject_5fattributes_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2ftask_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fworkflow_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fworkflow_5fattributes_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2flaunch_5fplan_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fevent_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fexecution_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fmatchable_5fresource_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fnode_5fexecution_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2ftask_5fexecution_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fversion_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fcommon_2eproto,
    ::AddDescriptors_flyteidl_2fadmin_2fdescription_5fentity_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_flyteidl_2fservice_2fadmin_2eproto, deps, 16);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_flyteidl_2fservice_2fadmin_2eproto = []() { AddDescriptors_flyteidl_2fservice_2fadmin_2eproto(); return true; }();
namespace flyteidl {
namespace service {

// @@protoc_insertion_point(namespace_scope)
}  // namespace service
}  // namespace flyteidl
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
