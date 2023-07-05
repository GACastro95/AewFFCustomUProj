// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSUIManagerInGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSUIManagerInGame() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerInGame_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerInGame();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSUIManagerInGame::execResetAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerInGame::execSetAbilityVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	void AELSSUIManagerInGame::StaticRegisterNativesAELSSUIManagerInGame()
	{
		UClass* Class = AELSSUIManagerInGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetAbility", &AELSSUIManagerInGame::execResetAbility },
			{ "SetAbilityVisible", &AELSSUIManagerInGame::execSetAbilityVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSUIManagerInGame_ResetAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerInGame_ResetAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerInGame_ResetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerInGame, nullptr, "ResetAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerInGame_ResetAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerInGame_ResetAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerInGame_ResetAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerInGame_ResetAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics
	{
		struct ELSSUIManagerInGame_eventSetAbilityVisible_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSUIManagerInGame_eventSetAbilityVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerInGame_eventSetAbilityVisible_Parms), &Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerInGame, nullptr, "SetAbilityVisible", nullptr, nullptr, sizeof(ELSSUIManagerInGame_eventSetAbilityVisible_Parms), Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSUIManagerInGame_NoRegister()
	{
		return AELSSUIManagerInGame::StaticClass();
	}
	struct Z_Construct_UClass_AELSSUIManagerInGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCanPushSwitchMapMode_MetaData[];
#endif
		static void NewProp_IsCanPushSwitchMapMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCanPushSwitchMapMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSUIManagerInGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSUIManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSUIManagerInGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSUIManagerInGame_ResetAbility, "ResetAbility" }, // 915218934
		{ &Z_Construct_UFunction_AELSSUIManagerInGame_SetAbilityVisible, "SetAbilityVisible" }, // 1079695356
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerInGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSUIManagerInGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerInGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_Panel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUIManagerInGame" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_Panel = { "Panel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSUIManagerInGame, Panel), Z_Construct_UClass_UELSSPanelBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_Panel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_Panel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_IsCanPushSwitchMapMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUIManagerInGame" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerInGame.h" },
	};
#endif
	void Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_IsCanPushSwitchMapMode_SetBit(void* Obj)
	{
		((AELSSUIManagerInGame*)Obj)->IsCanPushSwitchMapMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_IsCanPushSwitchMapMode = { "IsCanPushSwitchMapMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSUIManagerInGame), &Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_IsCanPushSwitchMapMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_IsCanPushSwitchMapMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_IsCanPushSwitchMapMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSUIManagerInGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_Panel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSUIManagerInGame_Statics::NewProp_IsCanPushSwitchMapMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSUIManagerInGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSUIManagerInGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSUIManagerInGame_Statics::ClassParams = {
		&AELSSUIManagerInGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSUIManagerInGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerInGame_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerInGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerInGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSUIManagerInGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSUIManagerInGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSUIManagerInGame, 791481287);
	template<> ABP_200508_API UClass* StaticClass<AELSSUIManagerInGame>()
	{
		return AELSSUIManagerInGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSUIManagerInGame(Z_Construct_UClass_AELSSUIManagerInGame, &AELSSUIManagerInGame::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSUIManagerInGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSUIManagerInGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
