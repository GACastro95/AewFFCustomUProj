// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EJIRAConditionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJIRAConditionType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAConditionType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EJIRAConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EJIRAConditionType, Z_Construct_UPackage__Script_yDebug(), TEXT("EJIRAConditionType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EJIRAConditionType>()
	{
		return EJIRAConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJIRAConditionType(EJIRAConditionType_StaticEnum, TEXT("/Script/yDebug"), TEXT("EJIRAConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EJIRAConditionType_Hash() { return 2367226855U; }
	UEnum* Z_Construct_UEnum_yDebug_EJIRAConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJIRAConditionType"), 0, Get_Z_Construct_UEnum_yDebug_EJIRAConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJIRAConditionType::None", (int64)EJIRAConditionType::None },
				{ "EJIRAConditionType::Field", (int64)EJIRAConditionType::Field },
				{ "EJIRAConditionType::Status", (int64)EJIRAConditionType::Status },
				{ "EJIRAConditionType::CurrentUser", (int64)EJIRAConditionType::CurrentUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CurrentUser.Name", "EJIRAConditionType::CurrentUser" },
				{ "Field.Name", "EJIRAConditionType::Field" },
				{ "ModuleRelativePath", "Public/EJIRAConditionType.h" },
				{ "None.Name", "EJIRAConditionType::None" },
				{ "Status.Name", "EJIRAConditionType::Status" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EJIRAConditionType",
				"EJIRAConditionType",
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
