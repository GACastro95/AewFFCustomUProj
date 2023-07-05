// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerMovieSceneManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerMovieSceneManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMovieSceneManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMovieSceneManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMovieSceneState();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSequencePlayerBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerMovieSceneManager::execCheckState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckState(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerMovieSceneManager::execDisableUpdateWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableUpdateWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerMovieSceneManager::execIsFinishState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFinishState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerMovieSceneManager::execSetState)
	{
		P_GET_ENUM(ECareerMovieSceneState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(ECareerMovieSceneState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerMovieSceneManager::execSetSubtitles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fDispTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitles(Z_Param_TextID,Z_Param_fDispTime);
		P_NATIVE_END;
	}
	void AELCareerMovieSceneManager::StaticRegisterNativesAELCareerMovieSceneManager()
	{
		UClass* Class = AELCareerMovieSceneManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckState", &AELCareerMovieSceneManager::execCheckState },
			{ "DisableUpdateWidget", &AELCareerMovieSceneManager::execDisableUpdateWidget },
			{ "IsFinishState", &AELCareerMovieSceneManager::execIsFinishState },
			{ "SetState", &AELCareerMovieSceneManager::execSetState },
			{ "SetSubtitles", &AELCareerMovieSceneManager::execSetSubtitles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics
	{
		struct ELCareerMovieSceneManager_eventCheckState_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMovieSceneManager_eventCheckState_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerMovieSceneManager, nullptr, "CheckState", nullptr, nullptr, sizeof(ELCareerMovieSceneManager_eventCheckState_Parms), Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerMovieSceneManager_DisableUpdateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMovieSceneManager_DisableUpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerMovieSceneManager_DisableUpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerMovieSceneManager, nullptr, "DisableUpdateWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerMovieSceneManager_DisableUpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_DisableUpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerMovieSceneManager_DisableUpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerMovieSceneManager_DisableUpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics
	{
		struct ELCareerMovieSceneManager_eventIsFinishState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerMovieSceneManager_eventIsFinishState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerMovieSceneManager_eventIsFinishState_Parms), &Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerMovieSceneManager, nullptr, "IsFinishState", nullptr, nullptr, sizeof(ELCareerMovieSceneManager_eventIsFinishState_Parms), Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics
	{
		struct ELCareerMovieSceneManager_eventSetState_Parms
		{
			ECareerMovieSceneState State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMovieSceneManager_eventSetState_Parms, State), Z_Construct_UEnum_ABP_200508_ECareerMovieSceneState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerMovieSceneManager, nullptr, "SetState", nullptr, nullptr, sizeof(ELCareerMovieSceneManager_eventSetState_Parms), Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerMovieSceneManager_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerMovieSceneManager_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics
	{
		struct ELCareerMovieSceneManager_eventSetSubtitles_Parms
		{
			FString TextID;
			float fDispTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDispTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::NewProp_TextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::NewProp_TextID = { "TextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMovieSceneManager_eventSetSubtitles_Parms, TextID), METADATA_PARAMS(Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::NewProp_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::NewProp_TextID_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::NewProp_fDispTime = { "fDispTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMovieSceneManager_eventSetSubtitles_Parms, fDispTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::NewProp_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::NewProp_fDispTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerMovieSceneManager, nullptr, "SetSubtitles", nullptr, nullptr, sizeof(ELCareerMovieSceneManager_eventSetSubtitles_Parms), Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerMovieSceneManager_NoRegister()
	{
		return AELCareerMovieSceneManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerMovieSceneManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pSequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pSequencePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerMovieSceneManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerMovieSceneManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerMovieSceneManager_CheckState, "CheckState" }, // 2188576393
		{ &Z_Construct_UFunction_AELCareerMovieSceneManager_DisableUpdateWidget, "DisableUpdateWidget" }, // 1591428735
		{ &Z_Construct_UFunction_AELCareerMovieSceneManager_IsFinishState, "IsFinishState" }, // 210292290
		{ &Z_Construct_UFunction_AELCareerMovieSceneManager_SetState, "SetState" }, // 2276188988
		{ &Z_Construct_UFunction_AELCareerMovieSceneManager_SetSubtitles, "SetSubtitles" }, // 438578611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerMovieSceneManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerMovieSceneManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerMovieSceneManager_Statics::NewProp_m_pSequencePlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerMovieSceneManager" },
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerMovieSceneManager_Statics::NewProp_m_pSequencePlayer = { "m_pSequencePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerMovieSceneManager, m_pSequencePlayer), Z_Construct_UClass_AELCareerSequencePlayerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerMovieSceneManager_Statics::NewProp_m_pSequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMovieSceneManager_Statics::NewProp_m_pSequencePlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerMovieSceneManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerMovieSceneManager_Statics::NewProp_m_pSequencePlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerMovieSceneManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerMovieSceneManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerMovieSceneManager_Statics::ClassParams = {
		&AELCareerMovieSceneManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerMovieSceneManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMovieSceneManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerMovieSceneManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMovieSceneManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerMovieSceneManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerMovieSceneManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerMovieSceneManager, 2847117454);
	template<> ABP_200508_API UClass* StaticClass<AELCareerMovieSceneManager>()
	{
		return AELCareerMovieSceneManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerMovieSceneManager(Z_Construct_UClass_AELCareerMovieSceneManager, &AELCareerMovieSceneManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerMovieSceneManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerMovieSceneManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
