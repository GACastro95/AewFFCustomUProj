// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESaveData_DebugSelectedCommandType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESaveData_DebugSelectedCommandType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESaveData_DebugSelectedCommandType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESaveData_DebugSelectedCommandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESaveData_DebugSelectedCommandType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESaveData_DebugSelectedCommandType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESaveData_DebugSelectedCommandType>()
	{
		return ESaveData_DebugSelectedCommandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveData_DebugSelectedCommandType(ESaveData_DebugSelectedCommandType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESaveData_DebugSelectedCommandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESaveData_DebugSelectedCommandType_Hash() { return 862891723U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESaveData_DebugSelectedCommandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveData_DebugSelectedCommandType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESaveData_DebugSelectedCommandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveData_DebugSelectedCommandType::None", (int64)ESaveData_DebugSelectedCommandType::None },
				{ "ESaveData_DebugSelectedCommandType::NeedLogin", (int64)ESaveData_DebugSelectedCommandType::NeedLogin },
				{ "ESaveData_DebugSelectedCommandType::ShowListAll", (int64)ESaveData_DebugSelectedCommandType::ShowListAll },
				{ "ESaveData_DebugSelectedCommandType::ShowList", (int64)ESaveData_DebugSelectedCommandType::ShowList },
				{ "ESaveData_DebugSelectedCommandType::ShowOnlineList", (int64)ESaveData_DebugSelectedCommandType::ShowOnlineList },
				{ "ESaveData_DebugSelectedCommandType::ShowTitleList", (int64)ESaveData_DebugSelectedCommandType::ShowTitleList },
				{ "ESaveData_DebugSelectedCommandType::ExportAll", (int64)ESaveData_DebugSelectedCommandType::ExportAll },
				{ "ESaveData_DebugSelectedCommandType::Import", (int64)ESaveData_DebugSelectedCommandType::Import },
				{ "ESaveData_DebugSelectedCommandType::ExportTextAll", (int64)ESaveData_DebugSelectedCommandType::ExportTextAll },
				{ "ESaveData_DebugSelectedCommandType::Export", (int64)ESaveData_DebugSelectedCommandType::Export },
				{ "ESaveData_DebugSelectedCommandType::ExportText", (int64)ESaveData_DebugSelectedCommandType::ExportText },
				{ "ESaveData_DebugSelectedCommandType::Upload", (int64)ESaveData_DebugSelectedCommandType::Upload },
				{ "ESaveData_DebugSelectedCommandType::Download", (int64)ESaveData_DebugSelectedCommandType::Download },
				{ "ESaveData_DebugSelectedCommandType::Download_Title", (int64)ESaveData_DebugSelectedCommandType::Download_Title },
				{ "ESaveData_DebugSelectedCommandType::Delete", (int64)ESaveData_DebugSelectedCommandType::Delete },
				{ "ESaveData_DebugSelectedCommandType::DeleteOnlineData", (int64)ESaveData_DebugSelectedCommandType::DeleteOnlineData },
				{ "ESaveData_DebugSelectedCommandType::Create", (int64)ESaveData_DebugSelectedCommandType::Create },
				{ "ESaveData_DebugSelectedCommandType::ClearLog", (int64)ESaveData_DebugSelectedCommandType::ClearLog },
				{ "ESaveData_DebugSelectedCommandType::CloseTab", (int64)ESaveData_DebugSelectedCommandType::CloseTab },
				{ "ESaveData_DebugSelectedCommandType::CloseResultWindow", (int64)ESaveData_DebugSelectedCommandType::CloseResultWindow },
				{ "ESaveData_DebugSelectedCommandType::ExportAllOnTab", (int64)ESaveData_DebugSelectedCommandType::ExportAllOnTab },
				{ "ESaveData_DebugSelectedCommandType::ExportTextAllOnTab", (int64)ESaveData_DebugSelectedCommandType::ExportTextAllOnTab },
				{ "ESaveData_DebugSelectedCommandType::DataReset", (int64)ESaveData_DebugSelectedCommandType::DataReset },
				{ "ESaveData_DebugSelectedCommandType::Max", (int64)ESaveData_DebugSelectedCommandType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClearLog.Name", "ESaveData_DebugSelectedCommandType::ClearLog" },
				{ "CloseResultWindow.Name", "ESaveData_DebugSelectedCommandType::CloseResultWindow" },
				{ "CloseTab.Name", "ESaveData_DebugSelectedCommandType::CloseTab" },
				{ "Create.Name", "ESaveData_DebugSelectedCommandType::Create" },
				{ "DataReset.Name", "ESaveData_DebugSelectedCommandType::DataReset" },
				{ "Delete.Name", "ESaveData_DebugSelectedCommandType::Delete" },
				{ "DeleteOnlineData.Name", "ESaveData_DebugSelectedCommandType::DeleteOnlineData" },
				{ "Download.Name", "ESaveData_DebugSelectedCommandType::Download" },
				{ "Download_Title.Name", "ESaveData_DebugSelectedCommandType::Download_Title" },
				{ "Export.Name", "ESaveData_DebugSelectedCommandType::Export" },
				{ "ExportAll.Name", "ESaveData_DebugSelectedCommandType::ExportAll" },
				{ "ExportAllOnTab.Name", "ESaveData_DebugSelectedCommandType::ExportAllOnTab" },
				{ "ExportText.Name", "ESaveData_DebugSelectedCommandType::ExportText" },
				{ "ExportTextAll.Name", "ESaveData_DebugSelectedCommandType::ExportTextAll" },
				{ "ExportTextAllOnTab.Name", "ESaveData_DebugSelectedCommandType::ExportTextAllOnTab" },
				{ "Import.Name", "ESaveData_DebugSelectedCommandType::Import" },
				{ "Max.Name", "ESaveData_DebugSelectedCommandType::Max" },
				{ "ModuleRelativePath", "Public/ESaveData_DebugSelectedCommandType.h" },
				{ "NeedLogin.Name", "ESaveData_DebugSelectedCommandType::NeedLogin" },
				{ "None.Name", "ESaveData_DebugSelectedCommandType::None" },
				{ "ShowList.Name", "ESaveData_DebugSelectedCommandType::ShowList" },
				{ "ShowListAll.Name", "ESaveData_DebugSelectedCommandType::ShowListAll" },
				{ "ShowOnlineList.Name", "ESaveData_DebugSelectedCommandType::ShowOnlineList" },
				{ "ShowTitleList.Name", "ESaveData_DebugSelectedCommandType::ShowTitleList" },
				{ "Upload.Name", "ESaveData_DebugSelectedCommandType::Upload" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESaveData_DebugSelectedCommandType",
				"ESaveData_DebugSelectedCommandType",
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
