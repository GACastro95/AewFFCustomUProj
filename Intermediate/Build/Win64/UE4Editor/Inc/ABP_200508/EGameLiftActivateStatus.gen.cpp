// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EGameLiftActivateStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameLiftActivateStatus() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EGameLiftActivateStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EGameLiftActivateStatus"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EGameLiftActivateStatus>()
	{
		return EGameLiftActivateStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameLiftActivateStatus(EGameLiftActivateStatus_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EGameLiftActivateStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus_Hash() { return 972876636U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameLiftActivateStatus"), 0, Get_Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameLiftActivateStatus::eACTIVATE_Success", (int64)EGameLiftActivateStatus::eACTIVATE_Success },
				{ "EGameLiftActivateStatus::eACTIVATE_NoGameLift", (int64)EGameLiftActivateStatus::eACTIVATE_NoGameLift },
				{ "EGameLiftActivateStatus::eACTIVATE_NoSuccessCallback", (int64)EGameLiftActivateStatus::eACTIVATE_NoSuccessCallback },
				{ "EGameLiftActivateStatus::eACTIVATE_NoFailCallback", (int64)EGameLiftActivateStatus::eACTIVATE_NoFailCallback },
				{ "EGameLiftActivateStatus::eACTIVATE_MAX", (int64)EGameLiftActivateStatus::eACTIVATE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eACTIVATE_MAX.Hidden", "" },
				{ "eACTIVATE_MAX.Name", "EGameLiftActivateStatus::eACTIVATE_MAX" },
				{ "eACTIVATE_NoFailCallback.Name", "EGameLiftActivateStatus::eACTIVATE_NoFailCallback" },
				{ "eACTIVATE_NoGameLift.Name", "EGameLiftActivateStatus::eACTIVATE_NoGameLift" },
				{ "eACTIVATE_NoSuccessCallback.Name", "EGameLiftActivateStatus::eACTIVATE_NoSuccessCallback" },
				{ "eACTIVATE_Success.Name", "EGameLiftActivateStatus::eACTIVATE_Success" },
				{ "ModuleRelativePath", "Public/EGameLiftActivateStatus.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EGameLiftActivateStatus",
				"EGameLiftActivateStatus",
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
