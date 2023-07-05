// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameModeBase() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_AELGameModeBase_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_AELGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	DEFINE_FUNCTION(AELGameModeBase::execCheckCanStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCanStartGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeBase::execOnInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialize_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeBase::execOnStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartGame_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AELGameModeBase_CheckCanStartGame = FName(TEXT("CheckCanStartGame"));
	bool AELGameModeBase::CheckCanStartGame() const
	{
		ELGameModeBase_eventCheckCanStartGame_Parms Parms;
		const_cast<AELGameModeBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELGameModeBase_CheckCanStartGame),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELGameModeBase_OnInitialize = FName(TEXT("OnInitialize"));
	void AELGameModeBase::OnInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELGameModeBase_OnInitialize),NULL);
	}
	static FName NAME_AELGameModeBase_OnStartGame = FName(TEXT("OnStartGame"));
	void AELGameModeBase::OnStartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELGameModeBase_OnStartGame),NULL);
	}
	void AELGameModeBase::StaticRegisterNativesAELGameModeBase()
	{
		UClass* Class = AELGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCanStartGame", &AELGameModeBase::execCheckCanStartGame },
			{ "OnInitialize", &AELGameModeBase::execOnInitialize },
			{ "OnStartGame", &AELGameModeBase::execOnStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameModeBase_eventCheckCanStartGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameModeBase_eventCheckCanStartGame_Parms), &Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeBase, nullptr, "CheckCanStartGame", nullptr, nullptr, sizeof(ELGameModeBase_eventCheckCanStartGame_Parms), Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeBase_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeBase_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeBase_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeBase, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeBase_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeBase_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeBase_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeBase_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeBase_OnStartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeBase_OnStartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeBase_OnStartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeBase, nullptr, "OnStartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeBase_OnStartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeBase_OnStartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeBase_OnStartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeBase_OnStartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELGameModeBase_NoRegister()
	{
		return AELGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AELGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartGame_MetaData[];
#endif
		static void NewProp_bStartGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELGameModeBase_CheckCanStartGame, "CheckCanStartGame" }, // 2109591181
		{ &Z_Construct_UFunction_AELGameModeBase_OnInitialize, "OnInitialize" }, // 354923895
		{ &Z_Construct_UFunction_AELGameModeBase_OnStartGame, "OnStartGame" }, // 592555335
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELGameModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameModeBase_Statics::NewProp_bStartGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameModeBase" },
		{ "ModuleRelativePath", "Public/ELGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_AELGameModeBase_Statics::NewProp_bStartGame_SetBit(void* Obj)
	{
		((AELGameModeBase*)Obj)->bStartGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameModeBase_Statics::NewProp_bStartGame = { "bStartGame", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameModeBase), &Z_Construct_UClass_AELGameModeBase_Statics::NewProp_bStartGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameModeBase_Statics::NewProp_bStartGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameModeBase_Statics::NewProp_bStartGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameModeBase_Statics::NewProp_bStartGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELGameModeBase_Statics::ClassParams = {
		&AELGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AELGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELGameModeBase, 2082905188);
	template<> ELITE_CORE_API UClass* StaticClass<AELGameModeBase>()
	{
		return AELGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELGameModeBase(Z_Construct_UClass_AELGameModeBase, &AELGameModeBase::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("AELGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
