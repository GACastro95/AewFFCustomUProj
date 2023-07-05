// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELWeaponFallMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWeaponFallMove() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELWeaponFallMove_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELWeaponFallMove();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELWeaponFallMove::execGetWeaponHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeaponHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELWeaponFallMove::execIsEnableFootIKOnly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableFootIKOnly();
		P_NATIVE_END;
	}
	static FName NAME_AELWeaponFallMove_BeginExcludedFromPlayerCollision = FName(TEXT("BeginExcludedFromPlayerCollision"));
	void AELWeaponFallMove::BeginExcludedFromPlayerCollision(AActor* HitActor)
	{
		ELWeaponFallMove_eventBeginExcludedFromPlayerCollision_Parms Parms;
		Parms.HitActor=HitActor;
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponFallMove_BeginExcludedFromPlayerCollision),&Parms);
	}
	static FName NAME_AELWeaponFallMove_GetFloorCollision = FName(TEXT("GetFloorCollision"));
	void AELWeaponFallMove::GetFloorCollision(bool IsOnOneFoot, UPrimitiveComponent*& ignoreComponent)
	{
		ELWeaponFallMove_eventGetFloorCollision_Parms Parms;
		Parms.IsOnOneFoot=IsOnOneFoot ? true : false;
		Parms.ignoreComponent=ignoreComponent;
		ProcessEvent(FindFunctionChecked(NAME_AELWeaponFallMove_GetFloorCollision),&Parms);
		ignoreComponent=Parms.ignoreComponent;
	}
	void AELWeaponFallMove::StaticRegisterNativesAELWeaponFallMove()
	{
		UClass* Class = AELWeaponFallMove::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeaponHeight", &AELWeaponFallMove::execGetWeaponHeight },
			{ "IsEnableFootIKOnly", &AELWeaponFallMove::execIsEnableFootIKOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponFallMove_eventBeginExcludedFromPlayerCollision_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::NewProp_HitActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponFallMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponFallMove, nullptr, "BeginExcludedFromPlayerCollision", nullptr, nullptr, sizeof(ELWeaponFallMove_eventBeginExcludedFromPlayerCollision_Parms), Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics
	{
		static void NewProp_IsOnOneFoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOnOneFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignoreComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignoreComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_IsOnOneFoot_SetBit(void* Obj)
	{
		((ELWeaponFallMove_eventGetFloorCollision_Parms*)Obj)->IsOnOneFoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_IsOnOneFoot = { "IsOnOneFoot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELWeaponFallMove_eventGetFloorCollision_Parms), &Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_IsOnOneFoot_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_ignoreComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_ignoreComponent = { "ignoreComponent", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponFallMove_eventGetFloorCollision_Parms, ignoreComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_ignoreComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_ignoreComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_IsOnOneFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::NewProp_ignoreComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponFallMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponFallMove, nullptr, "GetFloorCollision", nullptr, nullptr, sizeof(ELWeaponFallMove_eventGetFloorCollision_Parms), Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics
	{
		struct ELWeaponFallMove_eventGetWeaponHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWeaponFallMove_eventGetWeaponHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponFallMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponFallMove, nullptr, "GetWeaponHeight", nullptr, nullptr, sizeof(ELWeaponFallMove_eventGetWeaponHeight_Parms), Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics
	{
		struct ELWeaponFallMove_eventIsEnableFootIKOnly_Parms
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
	void Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELWeaponFallMove_eventIsEnableFootIKOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELWeaponFallMove_eventIsEnableFootIKOnly_Parms), &Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWeaponFallMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELWeaponFallMove, nullptr, "IsEnableFootIKOnly", nullptr, nullptr, sizeof(ELWeaponFallMove_eventIsEnableFootIKOnly_Parms), Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELWeaponFallMove_NoRegister()
	{
		return AELWeaponFallMove::StaticClass();
	}
	struct Z_Construct_UClass_AELWeaponFallMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFootIKOnly_N_MetaData[];
#endif
		static void NewProp_bEnableFootIKOnly_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFootIKOnly_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELWeaponFallMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELWeaponFallMove_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELWeaponFallMove_BeginExcludedFromPlayerCollision, "BeginExcludedFromPlayerCollision" }, // 225212956
		{ &Z_Construct_UFunction_AELWeaponFallMove_GetFloorCollision, "GetFloorCollision" }, // 2748727405
		{ &Z_Construct_UFunction_AELWeaponFallMove_GetWeaponHeight, "GetWeaponHeight" }, // 1389135963
		{ &Z_Construct_UFunction_AELWeaponFallMove_IsEnableFootIKOnly, "IsEnableFootIKOnly" }, // 3409991859
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELWeaponFallMove_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELWeaponFallMove.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELWeaponFallMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_WeaponHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWeaponFallMove" },
		{ "ModuleRelativePath", "Public/ELWeaponFallMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_WeaponHeight = { "WeaponHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELWeaponFallMove, WeaponHeight), METADATA_PARAMS(Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_WeaponHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_WeaponHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_bEnableFootIKOnly_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWeaponFallMove" },
		{ "ModuleRelativePath", "Public/ELWeaponFallMove.h" },
	};
#endif
	void Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_bEnableFootIKOnly_N_SetBit(void* Obj)
	{
		((AELWeaponFallMove*)Obj)->bEnableFootIKOnly_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_bEnableFootIKOnly_N = { "bEnableFootIKOnly_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELWeaponFallMove), &Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_bEnableFootIKOnly_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_bEnableFootIKOnly_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_bEnableFootIKOnly_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELWeaponFallMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_WeaponHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELWeaponFallMove_Statics::NewProp_bEnableFootIKOnly_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELWeaponFallMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELWeaponFallMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELWeaponFallMove_Statics::ClassParams = {
		&AELWeaponFallMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELWeaponFallMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELWeaponFallMove_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELWeaponFallMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELWeaponFallMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELWeaponFallMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELWeaponFallMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELWeaponFallMove, 1105216601);
	template<> ABP_200508_API UClass* StaticClass<AELWeaponFallMove>()
	{
		return AELWeaponFallMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELWeaponFallMove(Z_Construct_UClass_AELWeaponFallMove, &AELWeaponFallMove::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELWeaponFallMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELWeaponFallMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
