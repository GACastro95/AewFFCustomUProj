// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesTag_Function.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesTag_Function() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_Function();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesTag_Function_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesTag_Function, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesTag_Function"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesTag_Function>()
	{
		return EMovesTag_Function_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesTag_Function(EMovesTag_Function_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesTag_Function"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesTag_Function_Hash() { return 1822158803U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesTag_Function()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesTag_Function"), 0, Get_Z_Construct_UEnum_Creation_EMovesTag_Function_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesTag_Function::PEEK_ADDED_DEFAULT", (int64)EMovesTag_Function::PEEK_ADDED_DEFAULT },
				{ "EMovesTag_Function::FC_Pincombo", (int64)EMovesTag_Function::FC_Pincombo },
				{ "EMovesTag_Function::FC_DirectionalThrow", (int64)EMovesTag_Function::FC_DirectionalThrow },
				{ "EMovesTag_Function::FC_DelayedGrapple", (int64)EMovesTag_Function::FC_DelayedGrapple },
				{ "EMovesTag_Function::FC_Whip", (int64)EMovesTag_Function::FC_Whip },
				{ "EMovesTag_Function::FC_Atk_Ringout", (int64)EMovesTag_Function::FC_Atk_Ringout },
				{ "EMovesTag_Function::FC_Def_Ringout", (int64)EMovesTag_Function::FC_Def_Ringout },
				{ "EMovesTag_Function::FC_Submission", (int64)EMovesTag_Function::FC_Submission },
				{ "EMovesTag_Function::FC_Blood", (int64)EMovesTag_Function::FC_Blood },
				{ "EMovesTag_Function::FC_Injury", (int64)EMovesTag_Function::FC_Injury },
				{ "EMovesTag_Function::FC_WeightDetection", (int64)EMovesTag_Function::FC_WeightDetection },
				{ "EMovesTag_Function::FC_Etc", (int64)EMovesTag_Function::FC_Etc },
				{ "EMovesTag_Function::FC_MAX", (int64)EMovesTag_Function::FC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FC_Atk_Ringout.Name", "EMovesTag_Function::FC_Atk_Ringout" },
				{ "FC_Blood.Name", "EMovesTag_Function::FC_Blood" },
				{ "FC_Def_Ringout.Name", "EMovesTag_Function::FC_Def_Ringout" },
				{ "FC_DelayedGrapple.Name", "EMovesTag_Function::FC_DelayedGrapple" },
				{ "FC_DirectionalThrow.Name", "EMovesTag_Function::FC_DirectionalThrow" },
				{ "FC_Etc.Name", "EMovesTag_Function::FC_Etc" },
				{ "FC_Injury.Name", "EMovesTag_Function::FC_Injury" },
				{ "FC_MAX.Hidden", "" },
				{ "FC_MAX.Name", "EMovesTag_Function::FC_MAX" },
				{ "FC_Pincombo.Name", "EMovesTag_Function::FC_Pincombo" },
				{ "FC_Submission.Name", "EMovesTag_Function::FC_Submission" },
				{ "FC_WeightDetection.Name", "EMovesTag_Function::FC_WeightDetection" },
				{ "FC_Whip.Name", "EMovesTag_Function::FC_Whip" },
				{ "ModuleRelativePath", "Public/EMovesTag_Function.h" },
				{ "PEEK_ADDED_DEFAULT.Name", "EMovesTag_Function::PEEK_ADDED_DEFAULT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesTag_Function",
				"EMovesTag_Function",
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
