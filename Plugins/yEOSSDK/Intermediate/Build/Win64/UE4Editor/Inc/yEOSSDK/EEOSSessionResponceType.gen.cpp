// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionResponceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionResponceType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionResponceType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionResponceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionResponceType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionResponceType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionResponceType>()
	{
		return EEOSSessionResponceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionResponceType(EEOSSessionResponceType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionResponceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionResponceType_Hash() { return 2386430336U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionResponceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionResponceType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionResponceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionResponceType::Success", (int64)EEOSSessionResponceType::Success },
				{ "EEOSSessionResponceType::Broken", (int64)EEOSSessionResponceType::Broken },
				{ "EEOSSessionResponceType::Broken_NeedToRetry", (int64)EEOSSessionResponceType::Broken_NeedToRetry },
				{ "EEOSSessionResponceType::UnknownUser", (int64)EEOSSessionResponceType::UnknownUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Broken.Name", "EEOSSessionResponceType::Broken" },
				{ "Broken_NeedToRetry.Name", "EEOSSessionResponceType::Broken_NeedToRetry" },
				{ "ModuleRelativePath", "Public/EEOSSessionResponceType.h" },
				{ "Success.Name", "EEOSSessionResponceType::Success" },
				{ "UnknownUser.Name", "EEOSSessionResponceType::UnknownUser" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionResponceType",
				"EEOSSessionResponceType",
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
