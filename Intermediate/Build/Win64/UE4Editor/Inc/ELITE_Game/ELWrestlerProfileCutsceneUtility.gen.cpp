// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerProfileCutsceneUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerProfileCutsceneUtility() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELWrestlerProfileCutsceneUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
// End Cross Module References
	DEFINE_FUNCTION(UELWrestlerProfileCutsceneUtility::execIsSameCutscene)
	{
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_CutsceneA);
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_CutsceneB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELWrestlerProfileCutsceneUtility::IsSameCutscene(Z_Param_Out_CutsceneA,Z_Param_Out_CutsceneB);
		P_NATIVE_END;
	}
	void UELWrestlerProfileCutsceneUtility::StaticRegisterNativesUELWrestlerProfileCutsceneUtility()
	{
		UClass* Class = UELWrestlerProfileCutsceneUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSameCutscene", &UELWrestlerProfileCutsceneUtility::execIsSameCutscene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics
	{
		struct ELWrestlerProfileCutsceneUtility_eventIsSameCutscene_Parms
		{
			FELWrestlerProfile_CutScene CutsceneA;
			FELWrestlerProfile_CutScene CutsceneB;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneA = { "CutsceneA", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerProfileCutsceneUtility_eventIsSameCutscene_Parms, CutsceneA), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneB = { "CutsceneB", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerProfileCutsceneUtility_eventIsSameCutscene_Parms, CutsceneB), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneB_MetaData)) };
	void Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELWrestlerProfileCutsceneUtility_eventIsSameCutscene_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELWrestlerProfileCutsceneUtility_eventIsSameCutscene_Parms), &Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_CutsceneB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWrestlerProfileCutsceneUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELWrestlerProfileCutsceneUtility, nullptr, "IsSameCutscene", nullptr, nullptr, sizeof(ELWrestlerProfileCutsceneUtility_eventIsSameCutscene_Parms), Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_NoRegister()
	{
		return UELWrestlerProfileCutsceneUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELWrestlerProfileCutsceneUtility_IsSameCutscene, "IsSameCutscene" }, // 3481731971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELWrestlerProfileCutsceneUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfileCutsceneUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELWrestlerProfileCutsceneUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics::ClassParams = {
		&UELWrestlerProfileCutsceneUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELWrestlerProfileCutsceneUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELWrestlerProfileCutsceneUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELWrestlerProfileCutsceneUtility, 2154423943);
	template<> ELITE_GAME_API UClass* StaticClass<UELWrestlerProfileCutsceneUtility>()
	{
		return UELWrestlerProfileCutsceneUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELWrestlerProfileCutsceneUtility(Z_Construct_UClass_UELWrestlerProfileCutsceneUtility, &UELWrestlerProfileCutsceneUtility::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELWrestlerProfileCutsceneUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELWrestlerProfileCutsceneUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
