// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOnlineTestPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOnlineTestPlayerState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestPlayerState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
	DEFINE_FUNCTION(AELSSOnlineTestPlayerState::execDoneUIPrepare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoneUIPrepare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestPlayerState::execDoneUIPrepare_Server)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoneUIPrepare_Server_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AELSSOnlineTestPlayerState_DoneUIPrepare_Server = FName(TEXT("DoneUIPrepare_Server"));
	void AELSSOnlineTestPlayerState::DoneUIPrepare_Server()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerState_DoneUIPrepare_Server),NULL);
	}
	void AELSSOnlineTestPlayerState::StaticRegisterNativesAELSSOnlineTestPlayerState()
	{
		UClass* Class = AELSSOnlineTestPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoneUIPrepare", &AELSSOnlineTestPlayerState::execDoneUIPrepare },
			{ "DoneUIPrepare_Server", &AELSSOnlineTestPlayerState::execDoneUIPrepare_Server },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerState, nullptr, "DoneUIPrepare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerState, nullptr, "DoneUIPrepare_Server", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSOnlineTestPlayerState_NoRegister()
	{
		return AELSSOnlineTestPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDoneUIPrepare_MetaData[];
#endif
		static void NewProp_IsDoneUIPrepare_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDoneUIPrepare;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare, "DoneUIPrepare" }, // 2462868889
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerState_DoneUIPrepare_Server, "DoneUIPrepare_Server" }, // 1813914290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSOnlineTestPlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_IsDoneUIPrepare_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_IsDoneUIPrepare_SetBit(void* Obj)
	{
		((AELSSOnlineTestPlayerState*)Obj)->IsDoneUIPrepare = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_IsDoneUIPrepare = { "IsDoneUIPrepare", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSOnlineTestPlayerState), &Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_IsDoneUIPrepare_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_IsDoneUIPrepare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_IsDoneUIPrepare_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestPlayerState, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_IsDoneUIPrepare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::NewProp_WrestlerID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSOnlineTestPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::ClassParams = {
		&AELSSOnlineTestPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSOnlineTestPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSOnlineTestPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSOnlineTestPlayerState, 3741478800);
	template<> ABP_200508_API UClass* StaticClass<AELSSOnlineTestPlayerState>()
	{
		return AELSSOnlineTestPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSOnlineTestPlayerState(Z_Construct_UClass_AELSSOnlineTestPlayerState, &AELSSOnlineTestPlayerState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSOnlineTestPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSOnlineTestPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
