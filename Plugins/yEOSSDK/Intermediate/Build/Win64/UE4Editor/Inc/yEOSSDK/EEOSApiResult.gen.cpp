// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSApiResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSApiResult() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSApiResult();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSApiResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSApiResult, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSApiResult"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSApiResult>()
	{
		return EEOSApiResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSApiResult(EEOSApiResult_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSApiResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSApiResult_Hash() { return 4159026569U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSApiResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSApiResult"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSApiResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSApiResult::Unknown", (int64)EEOSApiResult::Unknown },
				{ "EEOSApiResult::Success", (int64)EEOSApiResult::Success },
				{ "EEOSApiResult::ConnectionError", (int64)EEOSApiResult::ConnectionError },
				{ "EEOSApiResult::ServerError", (int64)EEOSApiResult::ServerError },
				{ "EEOSApiResult::GatewayError", (int64)EEOSApiResult::GatewayError },
				{ "EEOSApiResult::BadRequest", (int64)EEOSApiResult::BadRequest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BadRequest.Name", "EEOSApiResult::BadRequest" },
				{ "BlueprintType", "true" },
				{ "ConnectionError.Name", "EEOSApiResult::ConnectionError" },
				{ "GatewayError.Name", "EEOSApiResult::GatewayError" },
				{ "ModuleRelativePath", "Public/EEOSApiResult.h" },
				{ "ServerError.Name", "EEOSApiResult::ServerError" },
				{ "Success.Name", "EEOSApiResult::Success" },
				{ "Unknown.Name", "EEOSApiResult::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSApiResult",
				"EEOSApiResult",
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
