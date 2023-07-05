// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ESaveDataAccessorProcMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESaveDataAccessorProcMode() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataAccessorProcMode();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ESaveDataAccessorProcMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ESaveDataAccessorProcMode, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ESaveDataAccessorProcMode"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataAccessorProcMode>()
	{
		return ESaveDataAccessorProcMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveDataAccessorProcMode(ESaveDataAccessorProcMode_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ESaveDataAccessorProcMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ESaveDataAccessorProcMode_Hash() { return 2490740635U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataAccessorProcMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveDataAccessorProcMode"), 0, Get_Z_Construct_UEnum_ELITE_Game_ESaveDataAccessorProcMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveDataAccessorProcMode::None", (int64)ESaveDataAccessorProcMode::None },
				{ "ESaveDataAccessorProcMode::CreateNew", (int64)ESaveDataAccessorProcMode::CreateNew },
				{ "ESaveDataAccessorProcMode::Access", (int64)ESaveDataAccessorProcMode::Access },
				{ "ESaveDataAccessorProcMode::ReleaseAccess", (int64)ESaveDataAccessorProcMode::ReleaseAccess },
				{ "ESaveDataAccessorProcMode::Load", (int64)ESaveDataAccessorProcMode::Load },
				{ "ESaveDataAccessorProcMode::Save", (int64)ESaveDataAccessorProcMode::Save },
				{ "ESaveDataAccessorProcMode::Load_ForDebug", (int64)ESaveDataAccessorProcMode::Load_ForDebug },
				{ "ESaveDataAccessorProcMode::Save_ForDebug", (int64)ESaveDataAccessorProcMode::Save_ForDebug },
				{ "ESaveDataAccessorProcMode::Copy", (int64)ESaveDataAccessorProcMode::Copy },
				{ "ESaveDataAccessorProcMode::Delete", (int64)ESaveDataAccessorProcMode::Delete },
				{ "ESaveDataAccessorProcMode::Download", (int64)ESaveDataAccessorProcMode::Download },
				{ "ESaveDataAccessorProcMode::Upload", (int64)ESaveDataAccessorProcMode::Upload },
				{ "ESaveDataAccessorProcMode::DeleteOnServer", (int64)ESaveDataAccessorProcMode::DeleteOnServer },
				{ "ESaveDataAccessorProcMode::DownloadTitleData", (int64)ESaveDataAccessorProcMode::DownloadTitleData },
				{ "ESaveDataAccessorProcMode::ListForLocalData", (int64)ESaveDataAccessorProcMode::ListForLocalData },
				{ "ESaveDataAccessorProcMode::ListForLocalData_ProjDir", (int64)ESaveDataAccessorProcMode::ListForLocalData_ProjDir },
				{ "ESaveDataAccessorProcMode::ListForServerData", (int64)ESaveDataAccessorProcMode::ListForServerData },
				{ "ESaveDataAccessorProcMode::ListForTitleData", (int64)ESaveDataAccessorProcMode::ListForTitleData },
				{ "ESaveDataAccessorProcMode::CacheLoad", (int64)ESaveDataAccessorProcMode::CacheLoad },
				{ "ESaveDataAccessorProcMode::GetQuota", (int64)ESaveDataAccessorProcMode::GetQuota },
				{ "ESaveDataAccessorProcMode::ConvertPS5FromPS4", (int64)ESaveDataAccessorProcMode::ConvertPS5FromPS4 },
				{ "ESaveDataAccessorProcMode::Import", (int64)ESaveDataAccessorProcMode::Import },
				{ "ESaveDataAccessorProcMode::Export", (int64)ESaveDataAccessorProcMode::Export },
				{ "ESaveDataAccessorProcMode::CompareHash", (int64)ESaveDataAccessorProcMode::CompareHash },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Access.Name", "ESaveDataAccessorProcMode::Access" },
				{ "BlueprintType", "true" },
				{ "CacheLoad.Name", "ESaveDataAccessorProcMode::CacheLoad" },
				{ "CompareHash.Name", "ESaveDataAccessorProcMode::CompareHash" },
				{ "ConvertPS5FromPS4.Name", "ESaveDataAccessorProcMode::ConvertPS5FromPS4" },
				{ "Copy.Name", "ESaveDataAccessorProcMode::Copy" },
				{ "CreateNew.Name", "ESaveDataAccessorProcMode::CreateNew" },
				{ "Delete.Name", "ESaveDataAccessorProcMode::Delete" },
				{ "DeleteOnServer.Name", "ESaveDataAccessorProcMode::DeleteOnServer" },
				{ "Download.Name", "ESaveDataAccessorProcMode::Download" },
				{ "DownloadTitleData.Name", "ESaveDataAccessorProcMode::DownloadTitleData" },
				{ "Export.Name", "ESaveDataAccessorProcMode::Export" },
				{ "GetQuota.Name", "ESaveDataAccessorProcMode::GetQuota" },
				{ "Import.Name", "ESaveDataAccessorProcMode::Import" },
				{ "ListForLocalData.Name", "ESaveDataAccessorProcMode::ListForLocalData" },
				{ "ListForLocalData_ProjDir.Name", "ESaveDataAccessorProcMode::ListForLocalData_ProjDir" },
				{ "ListForServerData.Name", "ESaveDataAccessorProcMode::ListForServerData" },
				{ "ListForTitleData.Name", "ESaveDataAccessorProcMode::ListForTitleData" },
				{ "Load.Name", "ESaveDataAccessorProcMode::Load" },
				{ "Load_ForDebug.Name", "ESaveDataAccessorProcMode::Load_ForDebug" },
				{ "ModuleRelativePath", "Public/ESaveDataAccessorProcMode.h" },
				{ "None.Name", "ESaveDataAccessorProcMode::None" },
				{ "ReleaseAccess.Name", "ESaveDataAccessorProcMode::ReleaseAccess" },
				{ "Save.Name", "ESaveDataAccessorProcMode::Save" },
				{ "Save_ForDebug.Name", "ESaveDataAccessorProcMode::Save_ForDebug" },
				{ "Upload.Name", "ESaveDataAccessorProcMode::Upload" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ESaveDataAccessorProcMode",
				"ESaveDataAccessorProcMode",
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
