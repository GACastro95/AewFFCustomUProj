// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ESaveDataProcResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESaveDataProcResult() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ESaveDataProcResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ESaveDataProcResult"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataProcResult>()
	{
		return ESaveDataProcResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveDataProcResult(ESaveDataProcResult_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ESaveDataProcResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult_Hash() { return 2951665170U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveDataProcResult"), 0, Get_Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveDataProcResult::None", (int64)ESaveDataProcResult::None },
				{ "ESaveDataProcResult::Success", (int64)ESaveDataProcResult::Success },
				{ "ESaveDataProcResult::MajorVersionIsOld", (int64)ESaveDataProcResult::MajorVersionIsOld },
				{ "ESaveDataProcResult::MinorVersionIsOld", (int64)ESaveDataProcResult::MinorVersionIsOld },
				{ "ESaveDataProcResult::ValidationError", (int64)ESaveDataProcResult::ValidationError },
				{ "ESaveDataProcResult::ComparationError", (int64)ESaveDataProcResult::ComparationError },
				{ "ESaveDataProcResult::TypeError", (int64)ESaveDataProcResult::TypeError },
				{ "ESaveDataProcResult::NotFound", (int64)ESaveDataProcResult::NotFound },
				{ "ESaveDataProcResult::QuotaError_Size", (int64)ESaveDataProcResult::QuotaError_Size },
				{ "ESaveDataProcResult::QuotaError_Disk", (int64)ESaveDataProcResult::QuotaError_Disk },
				{ "ESaveDataProcResult::QuotaError_FileLimit", (int64)ESaveDataProcResult::QuotaError_FileLimit },
				{ "ESaveDataProcResult::QuotaError_DirLimit", (int64)ESaveDataProcResult::QuotaError_DirLimit },
				{ "ESaveDataProcResult::Broken", (int64)ESaveDataProcResult::Broken },
				{ "ESaveDataProcResult::OverwriteDenied", (int64)ESaveDataProcResult::OverwriteDenied },
				{ "ESaveDataProcResult::PermissionDenied", (int64)ESaveDataProcResult::PermissionDenied },
				{ "ESaveDataProcResult::InsufficientMemory", (int64)ESaveDataProcResult::InsufficientMemory },
				{ "ESaveDataProcResult::NotImplemented", (int64)ESaveDataProcResult::NotImplemented },
				{ "ESaveDataProcResult::SkipedProcess", (int64)ESaveDataProcResult::SkipedProcess },
				{ "ESaveDataProcResult::Canceled", (int64)ESaveDataProcResult::Canceled },
				{ "ESaveDataProcResult::RunningBackGroundProcess", (int64)ESaveDataProcResult::RunningBackGroundProcess },
				{ "ESaveDataProcResult::AlreadyRunning", (int64)ESaveDataProcResult::AlreadyRunning },
				{ "ESaveDataProcResult::SystemNotConfigured", (int64)ESaveDataProcResult::SystemNotConfigured },
				{ "ESaveDataProcResult::NotInitialized", (int64)ESaveDataProcResult::NotInitialized },
				{ "ESaveDataProcResult::ProcessNotConfigured", (int64)ESaveDataProcResult::ProcessNotConfigured },
				{ "ESaveDataProcResult::WrongArgument", (int64)ESaveDataProcResult::WrongArgument },
				{ "ESaveDataProcResult::NoData", (int64)ESaveDataProcResult::NoData },
				{ "ESaveDataProcResult::InvalidParameter", (int64)ESaveDataProcResult::InvalidParameter },
				{ "ESaveDataProcResult::RequestFailed", (int64)ESaveDataProcResult::RequestFailed },
				{ "ESaveDataProcResult::IOError", (int64)ESaveDataProcResult::IOError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyRunning.Name", "ESaveDataProcResult::AlreadyRunning" },
				{ "BlueprintType", "true" },
				{ "Broken.Name", "ESaveDataProcResult::Broken" },
				{ "Canceled.Name", "ESaveDataProcResult::Canceled" },
				{ "ComparationError.Name", "ESaveDataProcResult::ComparationError" },
				{ "InsufficientMemory.Name", "ESaveDataProcResult::InsufficientMemory" },
				{ "InvalidParameter.Name", "ESaveDataProcResult::InvalidParameter" },
				{ "IOError.Name", "ESaveDataProcResult::IOError" },
				{ "MajorVersionIsOld.Name", "ESaveDataProcResult::MajorVersionIsOld" },
				{ "MinorVersionIsOld.Name", "ESaveDataProcResult::MinorVersionIsOld" },
				{ "ModuleRelativePath", "Public/ESaveDataProcResult.h" },
				{ "NoData.Name", "ESaveDataProcResult::NoData" },
				{ "None.Name", "ESaveDataProcResult::None" },
				{ "NotFound.Name", "ESaveDataProcResult::NotFound" },
				{ "NotImplemented.Name", "ESaveDataProcResult::NotImplemented" },
				{ "NotInitialized.Name", "ESaveDataProcResult::NotInitialized" },
				{ "OverwriteDenied.Name", "ESaveDataProcResult::OverwriteDenied" },
				{ "PermissionDenied.Name", "ESaveDataProcResult::PermissionDenied" },
				{ "ProcessNotConfigured.Name", "ESaveDataProcResult::ProcessNotConfigured" },
				{ "QuotaError_DirLimit.Name", "ESaveDataProcResult::QuotaError_DirLimit" },
				{ "QuotaError_Disk.Name", "ESaveDataProcResult::QuotaError_Disk" },
				{ "QuotaError_FileLimit.Name", "ESaveDataProcResult::QuotaError_FileLimit" },
				{ "QuotaError_Size.Name", "ESaveDataProcResult::QuotaError_Size" },
				{ "RequestFailed.Name", "ESaveDataProcResult::RequestFailed" },
				{ "RunningBackGroundProcess.Name", "ESaveDataProcResult::RunningBackGroundProcess" },
				{ "SkipedProcess.Name", "ESaveDataProcResult::SkipedProcess" },
				{ "Success.Name", "ESaveDataProcResult::Success" },
				{ "SystemNotConfigured.Name", "ESaveDataProcResult::SystemNotConfigured" },
				{ "TypeError.Name", "ESaveDataProcResult::TypeError" },
				{ "ValidationError.Name", "ESaveDataProcResult::ValidationError" },
				{ "WrongArgument.Name", "ESaveDataProcResult::WrongArgument" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ESaveDataProcResult",
				"ESaveDataProcResult",
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
