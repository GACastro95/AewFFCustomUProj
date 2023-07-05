// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTagMatchIconBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTagMatchIconBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELTagMatchIconBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELTagMatchIconBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UELTagMatchIconBase::execOnChangedTagWait)
	{
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangedTagWait(Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTagMatchIconBase::execSetNativeParam)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_In);
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNativeParam(Z_Param_In,Z_Param_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTagMatchIconBase::execUpdate)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Player);
		P_GET_STRUCT(FVector2D,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_Player,Z_Param_Location);
		P_NATIVE_END;
	}
	static FName NAME_UELTagMatchIconBase_TagWaitChanged = FName(TEXT("TagWaitChanged"));
	void UELTagMatchIconBase::TagWaitChanged(bool Flag)
	{
		ELTagMatchIconBase_eventTagWaitChanged_Parms Parms;
		Parms.Flag=Flag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELTagMatchIconBase_TagWaitChanged),&Parms);
	}
	void UELTagMatchIconBase::StaticRegisterNativesUELTagMatchIconBase()
	{
		UClass* Class = UELTagMatchIconBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChangedTagWait", &UELTagMatchIconBase::execOnChangedTagWait },
			{ "SetNativeParam", &UELTagMatchIconBase::execSetNativeParam },
			{ "Update", &UELTagMatchIconBase::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics
	{
		struct ELTagMatchIconBase_eventOnChangedTagWait_Parms
		{
			bool Flag;
		};
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELTagMatchIconBase_eventOnChangedTagWait_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTagMatchIconBase_eventOnChangedTagWait_Parms), &Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTagMatchIconBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTagMatchIconBase, nullptr, "OnChangedTagWait", nullptr, nullptr, sizeof(ELTagMatchIconBase_eventOnChangedTagWait_Parms), Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics
	{
		struct ELTagMatchIconBase_eventSetNativeParam_Parms
		{
			UWidgetAnimation* In;
			UWidgetAnimation* Out;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_In;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTagMatchIconBase_eventSetNativeParam_Parms, In), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTagMatchIconBase_eventSetNativeParam_Parms, Out), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::NewProp_In,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTagMatchIconBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTagMatchIconBase, nullptr, "SetNativeParam", nullptr, nullptr, sizeof(ELTagMatchIconBase_eventSetNativeParam_Parms), Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics
	{
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELTagMatchIconBase_eventTagWaitChanged_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTagMatchIconBase_eventTagWaitChanged_Parms), &Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTagMatchIconBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTagMatchIconBase, nullptr, "TagWaitChanged", nullptr, nullptr, sizeof(ELTagMatchIconBase_eventTagWaitChanged_Parms), Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics
	{
		struct ELTagMatchIconBase_eventUpdate_Parms
		{
			AELCharacter_Native* Player;
			FVector2D Location;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTagMatchIconBase_eventUpdate_Parms, Player), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTagMatchIconBase_eventUpdate_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTagMatchIconBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTagMatchIconBase, nullptr, "Update", nullptr, nullptr, sizeof(ELTagMatchIconBase_eventUpdate_Parms), Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTagMatchIconBase_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTagMatchIconBase_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTagMatchIconBase_NoRegister()
	{
		return UELTagMatchIconBase::StaticClass();
	}
	struct Z_Construct_UClass_UELTagMatchIconBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTagMatchIconBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELIngameHUDBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTagMatchIconBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTagMatchIconBase_OnChangedTagWait, "OnChangedTagWait" }, // 3020155253
		{ &Z_Construct_UFunction_UELTagMatchIconBase_SetNativeParam, "SetNativeParam" }, // 3794727352
		{ &Z_Construct_UFunction_UELTagMatchIconBase_TagWaitChanged, "TagWaitChanged" }, // 835123836
		{ &Z_Construct_UFunction_UELTagMatchIconBase_Update, "Update" }, // 1838083610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTagMatchIconBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTagMatchIconBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTagMatchIconBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTagMatchIconBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTagMatchIconBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTagMatchIconBase_Statics::ClassParams = {
		&UELTagMatchIconBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELTagMatchIconBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTagMatchIconBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTagMatchIconBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTagMatchIconBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTagMatchIconBase, 2321907550);
	template<> ABP_200508_API UClass* StaticClass<UELTagMatchIconBase>()
	{
		return UELTagMatchIconBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTagMatchIconBase(Z_Construct_UClass_UELTagMatchIconBase, &UELTagMatchIconBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELTagMatchIconBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTagMatchIconBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
