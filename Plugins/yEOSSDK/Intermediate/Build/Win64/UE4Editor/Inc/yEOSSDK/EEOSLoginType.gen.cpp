// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSLoginType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSLoginType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLoginType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSLoginType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSLoginType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSLoginType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSLoginType>()
	{
		return EEOSLoginType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSLoginType(EEOSLoginType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSLoginType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSLoginType_Hash() { return 4019969893U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLoginType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSLoginType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSLoginType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSLoginType::None", (int64)EEOSLoginType::None },
				{ "EEOSLoginType::Password", (int64)EEOSLoginType::Password },
				{ "EEOSLoginType::ExchangeCode", (int64)EEOSLoginType::ExchangeCode },
				{ "EEOSLoginType::PersistentAuth", (int64)EEOSLoginType::PersistentAuth },
				{ "EEOSLoginType::DeviceCode", (int64)EEOSLoginType::DeviceCode },
				{ "EEOSLoginType::Developer", (int64)EEOSLoginType::Developer },
				{ "EEOSLoginType::RefreshToken", (int64)EEOSLoginType::RefreshToken },
				{ "EEOSLoginType::AccountPortal", (int64)EEOSLoginType::AccountPortal },
				{ "EEOSLoginType::ExternalAuth", (int64)EEOSLoginType::ExternalAuth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccountPortal.Name", "EEOSLoginType::AccountPortal" },
				{ "BlueprintType", "true" },
				{ "Developer.Name", "EEOSLoginType::Developer" },
				{ "DeviceCode.Name", "EEOSLoginType::DeviceCode" },
				{ "ExchangeCode.Name", "EEOSLoginType::ExchangeCode" },
				{ "ExternalAuth.Name", "EEOSLoginType::ExternalAuth" },
				{ "ModuleRelativePath", "Public/EEOSLoginType.h" },
				{ "None.Name", "EEOSLoginType::None" },
				{ "Password.Name", "EEOSLoginType::Password" },
				{ "PersistentAuth.Name", "EEOSLoginType::PersistentAuth" },
				{ "RefreshToken.Name", "EEOSLoginType::RefreshToken" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSLoginType",
				"EEOSLoginType",
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
