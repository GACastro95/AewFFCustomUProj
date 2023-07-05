// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELEOSSessionAttributeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEOSSessionAttributeTypes() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSSessionAttributeTypes();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELEOSSessionAttributeTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELEOSSessionAttributeTypes, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELEOSSessionAttributeTypes"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELEOSSessionAttributeTypes>()
	{
		return EELEOSSessionAttributeTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEOSSessionAttributeTypes(EELEOSSessionAttributeTypes_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELEOSSessionAttributeTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELEOSSessionAttributeTypes_Hash() { return 841673458U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELEOSSessionAttributeTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEOSSessionAttributeTypes"), 0, Get_Z_Construct_UEnum_ABP_200508_EELEOSSessionAttributeTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEOSSessionAttributeTypes::NONE", (int64)EELEOSSessionAttributeTypes::NONE },
				{ "EELEOSSessionAttributeTypes::SESSION_BUCKET_ID", (int64)EELEOSSessionAttributeTypes::SESSION_BUCKET_ID },
				{ "EELEOSSessionAttributeTypes::SESSION_NAME", (int64)EELEOSSessionAttributeTypes::SESSION_NAME },
				{ "EELEOSSessionAttributeTypes::SESSION_PUID", (int64)EELEOSSessionAttributeTypes::SESSION_PUID },
				{ "EELEOSSessionAttributeTypes::SESSION_EPICID", (int64)EELEOSSessionAttributeTypes::SESSION_EPICID },
				{ "EELEOSSessionAttributeTypes::SESSION_CREATETIME", (int64)EELEOSSessionAttributeTypes::SESSION_CREATETIME },
				{ "EELEOSSessionAttributeTypes::DISPNAME", (int64)EELEOSSessionAttributeTypes::DISPNAME },
				{ "EELEOSSessionAttributeTypes::BUILDVERSION", (int64)EELEOSSessionAttributeTypes::BUILDVERSION },
				{ "EELEOSSessionAttributeTypes::SERVER_NAME", (int64)EELEOSSessionAttributeTypes::SERVER_NAME },
				{ "EELEOSSessionAttributeTypes::SERVER_PING", (int64)EELEOSSessionAttributeTypes::SERVER_PING },
				{ "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS", (int64)EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS },
				{ "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_LIGHTSOUTMATCH", (int64)EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_LIGHTSOUTMATCH },
				{ "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_FALLSCOUNTANYWHERE", (int64)EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_FALLSCOUNTANYWHERE },
				{ "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_EXPLODINGBARBEDWIRE", (int64)EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_EXPLODINGBARBEDWIRE },
				{ "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_LADDERMATCH", (int64)EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_LADDERMATCH },
				{ "EELEOSSessionAttributeTypes::PLATFORM", (int64)EELEOSSessionAttributeTypes::PLATFORM },
				{ "EELEOSSessionAttributeTypes::RANK", (int64)EELEOSSessionAttributeTypes::RANK },
				{ "EELEOSSessionAttributeTypes::RANK_POINT", (int64)EELEOSSessionAttributeTypes::RANK_POINT },
				{ "EELEOSSessionAttributeTypes::RANK_NAME", (int64)EELEOSSessionAttributeTypes::RANK_NAME },
				{ "EELEOSSessionAttributeTypes::RANK_GROUPNAME", (int64)EELEOSSessionAttributeTypes::RANK_GROUPNAME },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BUILDVERSION.Name", "EELEOSSessionAttributeTypes::BUILDVERSION" },
				{ "DISPNAME.Name", "EELEOSSessionAttributeTypes::DISPNAME" },
				{ "MATCHRULE_OPTIONS.Name", "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS" },
				{ "MATCHRULE_OPTIONS_EXPLODINGBARBEDWIRE.Name", "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_EXPLODINGBARBEDWIRE" },
				{ "MATCHRULE_OPTIONS_FALLSCOUNTANYWHERE.Name", "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_FALLSCOUNTANYWHERE" },
				{ "MATCHRULE_OPTIONS_LADDERMATCH.Name", "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_LADDERMATCH" },
				{ "MATCHRULE_OPTIONS_LIGHTSOUTMATCH.Name", "EELEOSSessionAttributeTypes::MATCHRULE_OPTIONS_LIGHTSOUTMATCH" },
				{ "ModuleRelativePath", "Public/EELEOSSessionAttributeTypes.h" },
				{ "NONE.Name", "EELEOSSessionAttributeTypes::NONE" },
				{ "PLATFORM.Name", "EELEOSSessionAttributeTypes::PLATFORM" },
				{ "RANK.Name", "EELEOSSessionAttributeTypes::RANK" },
				{ "RANK_GROUPNAME.Name", "EELEOSSessionAttributeTypes::RANK_GROUPNAME" },
				{ "RANK_NAME.Name", "EELEOSSessionAttributeTypes::RANK_NAME" },
				{ "RANK_POINT.Name", "EELEOSSessionAttributeTypes::RANK_POINT" },
				{ "SERVER_NAME.Name", "EELEOSSessionAttributeTypes::SERVER_NAME" },
				{ "SERVER_PING.Name", "EELEOSSessionAttributeTypes::SERVER_PING" },
				{ "SESSION_BUCKET_ID.Name", "EELEOSSessionAttributeTypes::SESSION_BUCKET_ID" },
				{ "SESSION_CREATETIME.Name", "EELEOSSessionAttributeTypes::SESSION_CREATETIME" },
				{ "SESSION_EPICID.Name", "EELEOSSessionAttributeTypes::SESSION_EPICID" },
				{ "SESSION_NAME.Name", "EELEOSSessionAttributeTypes::SESSION_NAME" },
				{ "SESSION_PUID.Name", "EELEOSSessionAttributeTypes::SESSION_PUID" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELEOSSessionAttributeTypes",
				"EELEOSSessionAttributeTypes",
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
