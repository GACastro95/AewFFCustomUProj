// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/EYGS2RequestOptionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2RequestOptionType() {}
// Cross Module References
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2RequestOptionType();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	static UEnum* EYGS2RequestOptionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yGS2Client_EYGS2RequestOptionType, Z_Construct_UPackage__Script_yGS2Client(), TEXT("EYGS2RequestOptionType"));
		}
		return Singleton;
	}
	template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2RequestOptionType>()
	{
		return EYGS2RequestOptionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2RequestOptionType(EYGS2RequestOptionType_StaticEnum, TEXT("/Script/yGS2Client"), TEXT("EYGS2RequestOptionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yGS2Client_EYGS2RequestOptionType_Hash() { return 1184650666U; }
	UEnum* Z_Construct_UEnum_yGS2Client_EYGS2RequestOptionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2RequestOptionType"), 0, Get_Z_Construct_UEnum_yGS2Client_EYGS2RequestOptionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2RequestOptionType::None", (int64)EYGS2RequestOptionType::None },
				{ "EYGS2RequestOptionType::AppKey", (int64)EYGS2RequestOptionType::AppKey },
				{ "EYGS2RequestOptionType::TitleID", (int64)EYGS2RequestOptionType::TitleID },
				{ "EYGS2RequestOptionType::TitleVer", (int64)EYGS2RequestOptionType::TitleVer },
				{ "EYGS2RequestOptionType::EOSProductID", (int64)EYGS2RequestOptionType::EOSProductID },
				{ "EYGS2RequestOptionType::EOSSandboxID", (int64)EYGS2RequestOptionType::EOSSandboxID },
				{ "EYGS2RequestOptionType::EOSDeploymentID", (int64)EYGS2RequestOptionType::EOSDeploymentID },
				{ "EYGS2RequestOptionType::EOSClientID", (int64)EYGS2RequestOptionType::EOSClientID },
				{ "EYGS2RequestOptionType::AppAuthKey", (int64)EYGS2RequestOptionType::AppAuthKey },
				{ "EYGS2RequestOptionType::AppAuthSecret", (int64)EYGS2RequestOptionType::AppAuthSecret },
				{ "EYGS2RequestOptionType::UserAuthKey", (int64)EYGS2RequestOptionType::UserAuthKey },
				{ "EYGS2RequestOptionType::UserAuthSecret", (int64)EYGS2RequestOptionType::UserAuthSecret },
				{ "EYGS2RequestOptionType::SessionType", (int64)EYGS2RequestOptionType::SessionType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AppAuthKey.Name", "EYGS2RequestOptionType::AppAuthKey" },
				{ "AppAuthSecret.Name", "EYGS2RequestOptionType::AppAuthSecret" },
				{ "AppKey.Name", "EYGS2RequestOptionType::AppKey" },
				{ "BlueprintType", "true" },
				{ "EOSClientID.Name", "EYGS2RequestOptionType::EOSClientID" },
				{ "EOSDeploymentID.Name", "EYGS2RequestOptionType::EOSDeploymentID" },
				{ "EOSProductID.Name", "EYGS2RequestOptionType::EOSProductID" },
				{ "EOSSandboxID.Name", "EYGS2RequestOptionType::EOSSandboxID" },
				{ "ModuleRelativePath", "Public/EYGS2RequestOptionType.h" },
				{ "None.Name", "EYGS2RequestOptionType::None" },
				{ "SessionType.Name", "EYGS2RequestOptionType::SessionType" },
				{ "TitleID.Name", "EYGS2RequestOptionType::TitleID" },
				{ "TitleVer.Name", "EYGS2RequestOptionType::TitleVer" },
				{ "UserAuthKey.Name", "EYGS2RequestOptionType::UserAuthKey" },
				{ "UserAuthSecret.Name", "EYGS2RequestOptionType::UserAuthSecret" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yGS2Client,
				nullptr,
				"EYGS2RequestOptionType",
				"EYGS2RequestOptionType",
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
