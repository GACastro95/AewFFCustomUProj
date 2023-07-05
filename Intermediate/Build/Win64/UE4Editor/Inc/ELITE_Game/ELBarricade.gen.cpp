// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELBarricade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBarricade() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_AELBarricade_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_AELBarricade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static FName NAME_AELBarricade_IsConditionImpl_Fallendown = FName(TEXT("IsConditionImpl_Fallendown"));
	void AELBarricade::IsConditionImpl_Fallendown(bool& Out_IsFallendown)
	{
		ELBarricade_eventIsConditionImpl_Fallendown_Parms Parms;
		Parms.Out_IsFallendown=Out_IsFallendown ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELBarricade_IsConditionImpl_Fallendown),&Parms);
		Out_IsFallendown=Parms.Out_IsFallendown;
	}
	static FName NAME_AELBarricade_IsConditionImpl_LittleDiagonal = FName(TEXT("IsConditionImpl_LittleDiagonal"));
	void AELBarricade::IsConditionImpl_LittleDiagonal(bool& Out_IsDiagonal)
	{
		ELBarricade_eventIsConditionImpl_LittleDiagonal_Parms Parms;
		Parms.Out_IsDiagonal=Out_IsDiagonal ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELBarricade_IsConditionImpl_LittleDiagonal),&Parms);
		Out_IsDiagonal=Parms.Out_IsDiagonal;
	}
	static FName NAME_AELBarricade_IsConditionImpl_Normal = FName(TEXT("IsConditionImpl_Normal"));
	void AELBarricade::IsConditionImpl_Normal(bool& Out_IsNormal)
	{
		ELBarricade_eventIsConditionImpl_Normal_Parms Parms;
		Parms.Out_IsNormal=Out_IsNormal ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELBarricade_IsConditionImpl_Normal),&Parms);
		Out_IsNormal=Parms.Out_IsNormal;
	}
	static FName NAME_AELBarricade_IsEnableClimbUseImpl = FName(TEXT("IsEnableClimbUseImpl"));
	void AELBarricade::IsEnableClimbUseImpl(bool& Out_IsEnable)
	{
		ELBarricade_eventIsEnableClimbUseImpl_Parms Parms;
		Parms.Out_IsEnable=Out_IsEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELBarricade_IsEnableClimbUseImpl),&Parms);
		Out_IsEnable=Parms.Out_IsEnable;
	}
	void AELBarricade::StaticRegisterNativesAELBarricade()
	{
	}
	struct Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics
	{
		static void NewProp_Out_IsFallendown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Out_IsFallendown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::NewProp_Out_IsFallendown_SetBit(void* Obj)
	{
		((ELBarricade_eventIsConditionImpl_Fallendown_Parms*)Obj)->Out_IsFallendown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::NewProp_Out_IsFallendown = { "Out_IsFallendown", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBarricade_eventIsConditionImpl_Fallendown_Parms), &Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::NewProp_Out_IsFallendown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::NewProp_Out_IsFallendown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBarricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELBarricade, nullptr, "IsConditionImpl_Fallendown", nullptr, nullptr, sizeof(ELBarricade_eventIsConditionImpl_Fallendown_Parms), Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics
	{
		static void NewProp_Out_IsDiagonal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Out_IsDiagonal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::NewProp_Out_IsDiagonal_SetBit(void* Obj)
	{
		((ELBarricade_eventIsConditionImpl_LittleDiagonal_Parms*)Obj)->Out_IsDiagonal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::NewProp_Out_IsDiagonal = { "Out_IsDiagonal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBarricade_eventIsConditionImpl_LittleDiagonal_Parms), &Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::NewProp_Out_IsDiagonal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::NewProp_Out_IsDiagonal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBarricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELBarricade, nullptr, "IsConditionImpl_LittleDiagonal", nullptr, nullptr, sizeof(ELBarricade_eventIsConditionImpl_LittleDiagonal_Parms), Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics
	{
		static void NewProp_Out_IsNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Out_IsNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::NewProp_Out_IsNormal_SetBit(void* Obj)
	{
		((ELBarricade_eventIsConditionImpl_Normal_Parms*)Obj)->Out_IsNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::NewProp_Out_IsNormal = { "Out_IsNormal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBarricade_eventIsConditionImpl_Normal_Parms), &Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::NewProp_Out_IsNormal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::NewProp_Out_IsNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBarricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELBarricade, nullptr, "IsConditionImpl_Normal", nullptr, nullptr, sizeof(ELBarricade_eventIsConditionImpl_Normal_Parms), Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics
	{
		static void NewProp_Out_IsEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Out_IsEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::NewProp_Out_IsEnable_SetBit(void* Obj)
	{
		((ELBarricade_eventIsEnableClimbUseImpl_Parms*)Obj)->Out_IsEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::NewProp_Out_IsEnable = { "Out_IsEnable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBarricade_eventIsEnableClimbUseImpl_Parms), &Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::NewProp_Out_IsEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::NewProp_Out_IsEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBarricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELBarricade, nullptr, "IsEnableClimbUseImpl", nullptr, nullptr, sizeof(ELBarricade_eventIsEnableClimbUseImpl_Parms), Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELBarricade_NoRegister()
	{
		return AELBarricade::StaticClass();
	}
	struct Z_Construct_UClass_AELBarricade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELBarricade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELBarricade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELBarricade_IsConditionImpl_Fallendown, "IsConditionImpl_Fallendown" }, // 3502578298
		{ &Z_Construct_UFunction_AELBarricade_IsConditionImpl_LittleDiagonal, "IsConditionImpl_LittleDiagonal" }, // 3032944921
		{ &Z_Construct_UFunction_AELBarricade_IsConditionImpl_Normal, "IsConditionImpl_Normal" }, // 628561619
		{ &Z_Construct_UFunction_AELBarricade_IsEnableClimbUseImpl, "IsEnableClimbUseImpl" }, // 4149238812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELBarricade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBarricade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBarricade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELBarricade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELBarricade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELBarricade_Statics::ClassParams = {
		&AELBarricade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELBarricade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELBarricade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELBarricade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELBarricade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELBarricade, 1625791481);
	template<> ELITE_GAME_API UClass* StaticClass<AELBarricade>()
	{
		return AELBarricade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELBarricade(Z_Construct_UClass_AELBarricade, &AELBarricade::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("AELBarricade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELBarricade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
