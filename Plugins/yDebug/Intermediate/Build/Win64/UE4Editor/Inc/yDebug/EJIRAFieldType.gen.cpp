// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EJIRAFieldType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJIRAFieldType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAFieldType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EJIRAFieldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EJIRAFieldType, Z_Construct_UPackage__Script_yDebug(), TEXT("EJIRAFieldType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EJIRAFieldType>()
	{
		return EJIRAFieldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJIRAFieldType(EJIRAFieldType_StaticEnum, TEXT("/Script/yDebug"), TEXT("EJIRAFieldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EJIRAFieldType_Hash() { return 1606951883U; }
	UEnum* Z_Construct_UEnum_yDebug_EJIRAFieldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJIRAFieldType"), 0, Get_Z_Construct_UEnum_yDebug_EJIRAFieldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJIRAFieldType::None", (int64)EJIRAFieldType::None },
				{ "EJIRAFieldType::AggregateProgress", (int64)EJIRAFieldType::AggregateProgress },
				{ "EJIRAFieldType::AggregateTimeEstimate", (int64)EJIRAFieldType::AggregateTimeEstimate },
				{ "EJIRAFieldType::AggregatEtimespent", (int64)EJIRAFieldType::AggregatEtimespent },
				{ "EJIRAFieldType::Assignee", (int64)EJIRAFieldType::Assignee },
				{ "EJIRAFieldType::Created", (int64)EJIRAFieldType::Created },
				{ "EJIRAFieldType::Creator", (int64)EJIRAFieldType::Creator },
				{ "EJIRAFieldType::Description", (int64)EJIRAFieldType::Description },
				{ "EJIRAFieldType::DueDate", (int64)EJIRAFieldType::DueDate },
				{ "EJIRAFieldType::Environment", (int64)EJIRAFieldType::Environment },
				{ "EJIRAFieldType::FixVersions", (int64)EJIRAFieldType::FixVersions },
				{ "EJIRAFieldType::Issuelinks", (int64)EJIRAFieldType::Issuelinks },
				{ "EJIRAFieldType::IssueType", (int64)EJIRAFieldType::IssueType },
				{ "EJIRAFieldType::LastViewed", (int64)EJIRAFieldType::LastViewed },
				{ "EJIRAFieldType::Priority", (int64)EJIRAFieldType::Priority },
				{ "EJIRAFieldType::Progress", (int64)EJIRAFieldType::Progress },
				{ "EJIRAFieldType::Project", (int64)EJIRAFieldType::Project },
				{ "EJIRAFieldType::Reporter", (int64)EJIRAFieldType::Reporter },
				{ "EJIRAFieldType::Resolution", (int64)EJIRAFieldType::Resolution },
				{ "EJIRAFieldType::Status", (int64)EJIRAFieldType::Status },
				{ "EJIRAFieldType::SubTasks", (int64)EJIRAFieldType::SubTasks },
				{ "EJIRAFieldType::Summary", (int64)EJIRAFieldType::Summary },
				{ "EJIRAFieldType::TimeEsimate", (int64)EJIRAFieldType::TimeEsimate },
				{ "EJIRAFieldType::TimeoriginalEstimate", (int64)EJIRAFieldType::TimeoriginalEstimate },
				{ "EJIRAFieldType::Timespent", (int64)EJIRAFieldType::Timespent },
				{ "EJIRAFieldType::Updated", (int64)EJIRAFieldType::Updated },
				{ "EJIRAFieldType::Versions", (int64)EJIRAFieldType::Versions },
				{ "EJIRAFieldType::Votes", (int64)EJIRAFieldType::Votes },
				{ "EJIRAFieldType::Watches", (int64)EJIRAFieldType::Watches },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AggregateProgress.Name", "EJIRAFieldType::AggregateProgress" },
				{ "AggregateTimeEstimate.Name", "EJIRAFieldType::AggregateTimeEstimate" },
				{ "AggregatEtimespent.Name", "EJIRAFieldType::AggregatEtimespent" },
				{ "Assignee.Name", "EJIRAFieldType::Assignee" },
				{ "BlueprintType", "true" },
				{ "Created.Name", "EJIRAFieldType::Created" },
				{ "Creator.Name", "EJIRAFieldType::Creator" },
				{ "Description.Name", "EJIRAFieldType::Description" },
				{ "DueDate.Name", "EJIRAFieldType::DueDate" },
				{ "Environment.Name", "EJIRAFieldType::Environment" },
				{ "FixVersions.Name", "EJIRAFieldType::FixVersions" },
				{ "Issuelinks.Name", "EJIRAFieldType::Issuelinks" },
				{ "IssueType.Name", "EJIRAFieldType::IssueType" },
				{ "LastViewed.Name", "EJIRAFieldType::LastViewed" },
				{ "ModuleRelativePath", "Public/EJIRAFieldType.h" },
				{ "None.Name", "EJIRAFieldType::None" },
				{ "Priority.Name", "EJIRAFieldType::Priority" },
				{ "Progress.Name", "EJIRAFieldType::Progress" },
				{ "Project.Name", "EJIRAFieldType::Project" },
				{ "Reporter.Name", "EJIRAFieldType::Reporter" },
				{ "Resolution.Name", "EJIRAFieldType::Resolution" },
				{ "Status.Name", "EJIRAFieldType::Status" },
				{ "SubTasks.Name", "EJIRAFieldType::SubTasks" },
				{ "Summary.Name", "EJIRAFieldType::Summary" },
				{ "TimeEsimate.Name", "EJIRAFieldType::TimeEsimate" },
				{ "TimeoriginalEstimate.Name", "EJIRAFieldType::TimeoriginalEstimate" },
				{ "Timespent.Name", "EJIRAFieldType::Timespent" },
				{ "Updated.Name", "EJIRAFieldType::Updated" },
				{ "Versions.Name", "EJIRAFieldType::Versions" },
				{ "Votes.Name", "EJIRAFieldType::Votes" },
				{ "Watches.Name", "EJIRAFieldType::Watches" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EJIRAFieldType",
				"EJIRAFieldType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
