// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCharacterSetupComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCharacterSetupComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCharacterSetupComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCharacterSetupComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
	DEFINE_FUNCTION(UELSSCharacterSetupComponent::execCheckBlockedUserUGC)
	{
		P_GET_STRUCT_REF(FSSWrestlerSetupParam,Z_Param_Out_inWrestlerSetupParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckBlockedUserUGC(Z_Param_Out_inWrestlerSetupParam);
		P_NATIVE_END;
	}
	static FName NAME_UELSSCharacterSetupComponent_SetupMesh = FName(TEXT("SetupMesh"));
	void UELSSCharacterSetupComponent::SetupMesh(EWrestlerID_N inWrestlerId, FSSWrestlerSetupParam const& inWrestlerSetupParam, bool inUGCLimit)
	{
		ELSSCharacterSetupComponent_eventSetupMesh_Parms Parms;
		Parms.inWrestlerId=inWrestlerId;
		Parms.inWrestlerSetupParam=inWrestlerSetupParam;
		Parms.inUGCLimit=inUGCLimit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSCharacterSetupComponent_SetupMesh),&Parms);
	}
	void UELSSCharacterSetupComponent::StaticRegisterNativesUELSSCharacterSetupComponent()
	{
		UClass* Class = UELSSCharacterSetupComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckBlockedUserUGC", &UELSSCharacterSetupComponent::execCheckBlockedUserUGC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics
	{
		struct ELSSCharacterSetupComponent_eventCheckBlockedUserUGC_Parms
		{
			FSSWrestlerSetupParam inWrestlerSetupParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inWrestlerSetupParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_inWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_inWrestlerSetupParam = { "inWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacterSetupComponent_eventCheckBlockedUserUGC_Parms, inWrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_inWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_inWrestlerSetupParam_MetaData)) };
	void Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCharacterSetupComponent_eventCheckBlockedUserUGC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCharacterSetupComponent_eventCheckBlockedUserUGC_Parms), &Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_inWrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacterSetupComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCharacterSetupComponent, nullptr, "CheckBlockedUserUGC", nullptr, nullptr, sizeof(ELSSCharacterSetupComponent_eventCheckBlockedUserUGC_Parms), Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inWrestlerSetupParam;
		static void NewProp_inUGCLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUGCLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacterSetupComponent_eventSetupMesh_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerSetupParam = { "inWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacterSetupComponent_eventSetupMesh_Parms, inWrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerSetupParam_MetaData)) };
	void Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inUGCLimit_SetBit(void* Obj)
	{
		((ELSSCharacterSetupComponent_eventSetupMesh_Parms*)Obj)->inUGCLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inUGCLimit = { "inUGCLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCharacterSetupComponent_eventSetupMesh_Parms), &Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inUGCLimit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inWrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::NewProp_inUGCLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacterSetupComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCharacterSetupComponent, nullptr, "SetupMesh", nullptr, nullptr, sizeof(ELSSCharacterSetupComponent_eventSetupMesh_Parms), Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSCharacterSetupComponent_NoRegister()
	{
		return UELSSCharacterSetupComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSCharacterSetupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSCharacterSetupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSCharacterSetupComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSCharacterSetupComponent_CheckBlockedUserUGC, "CheckBlockedUserUGC" }, // 2708316313
		{ &Z_Construct_UFunction_UELSSCharacterSetupComponent_SetupMesh, "SetupMesh" }, // 1003214990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterSetupComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSSCharacterSetupComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacterSetupComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSCharacterSetupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSCharacterSetupComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSCharacterSetupComponent_Statics::ClassParams = {
		&UELSSCharacterSetupComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterSetupComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterSetupComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSCharacterSetupComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSCharacterSetupComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSCharacterSetupComponent, 2855814589);
	template<> ABP_200508_API UClass* StaticClass<UELSSCharacterSetupComponent>()
	{
		return UELSSCharacterSetupComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSCharacterSetupComponent(Z_Construct_UClass_UELSSCharacterSetupComponent, &UELSSCharacterSetupComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSCharacterSetupComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSCharacterSetupComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
